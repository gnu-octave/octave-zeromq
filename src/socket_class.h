// Copyright (C) 2014 John Donoghue <john.donoghue@ieee.org>
//
// This program is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free Software
// Foundation; either version 3 of the License, or (at your option) any later
// version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
// details.
//
// You should have received a copy of the GNU General Public License along with
// this program; if not, see <http://www.gnu.org/licenses/>.
#ifndef ZEROMQ_SOCKET_CLASS_H
#define ZEROMQ_SOCKET_CLASS_H

// Octave Includes
#include <octave/oct.h>
#include <octave/ops.h>
#include <octave/ov-base.h>
#include <octave/ov-typeinfo.h>
#include <octave/ov.h>
#include <octave/ov-scalar.h>
#include <octave/ov-struct.h>
#include <octave/ov-uint8.h>

#include <octave/defun-dld.h>

// string
#include <string>

#include <iostream>

#include <errno.h>

void init_types();

class octave_zeromq_socket : public octave_base_value
{
public:
  /**
   * default constructor 
   */
  octave_zeromq_socket ();

  /**
   * deconstructor
   */
  ~octave_zeromq_socket ();

  /**
   * access to the zeromq socket
   */
  const void * socket () const;
  void * socket ();

  int socktype () const;

  /**
   * create socket
   */
  bool create (int socket_type); 

  /**
   * close created socket
   */ 
  void close ();

  /**
   * connect socket 
   */
  bool connect (std::string endpoint);

  /**
   * bind socket
   */
  bool bind (std::string endpoint);

  /**
   * unbind socket
   */
  bool unbind (std::string endpoint);

  /**
   * send data of size sz bytes
   */
  int send (const uint8_t * data, size_t sz, int flags);

  /**
   * send data string
   */
  int send (std::string data, int flags);
 
  /**
   * read data of up to sz bytes in size
   */   
  int recv (uint8_t * data, size_t sz, int flags); 

  /**
   * get/setsock option
   */
  bool setsockopt (int opt, const void * val, size_t len); 
  bool getsockopt (int opt, void *value, size_t *len);

  /**
   * Various properties of the octave_base_value datatype.
   */
  bool is_constant (void) const { return true;}
  bool is_defined (void) const { return true;}
  bool is_object (void) const { return true; }

  octave_base_value * clone () const;
  octave_base_value * empty_clone () const;

 /**
  * Overloaded methods to print sock as the zeromq id
  */
  void print (std::ostream& os, bool pr_as_read_syntax = false) const;
  void print (std::ostream& os, bool pr_as_read_syntax = false); 
  void print_raw (std::ostream& os, bool pr_as_read_syntax) const;

private:
  octave_zeromq_socket (const octave_zeromq_socket &);

  void * sock;
  int type;
  std::string endpoint;

#ifdef DECLARE_OCTAVE_ALLOCATOR
  DECLARE_OCTAVE_ALLOCATOR
#endif
  DECLARE_OV_TYPEID_FUNCTIONS_AND_DATA
};

#endif // ZEROMQ_SOCKET_CLASS_H
