// Copyright (C) 2014-2018 John Donoghue <john.donoghue@ieee.org>
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

#ifdef HAVE_CONFIG_H
#  include "config.h"
#endif

// string
#include <string>

#include <iostream>

#include <errno.h>

void init_types(void);

class octave_zeromq_socket : public OCTAVE_BASE_CLASS
{
public:
  /**
   * default constructor 
   */
  octave_zeromq_socket (void);

  /**
   * deconstructor
   */
  ~octave_zeromq_socket (void);

  /**
   * access to the zeromq socket
   */
  const void * socket (void) const;
  void * socket (void);

  std::string getendpoint(void) const { return endpoint; }

  int socktype (void) const;

  // convert sock type
  std::string gettypestr(int intype=-1) const;
  static int gettypeval(const std::string &str);

  /**
   * create socket
   */
  bool create (int socket_type); 

  /**
   * close created socket
   */ 
  void close (void);

  /**
   * connect socket 
   */
  bool connect (const std::string &endpoint);

  /**
   * disconnect socket 
   */
  bool disconnect (const std::string &endpoint);

  /**
   * bind socket
   */
  bool bind (const std::string &endpoint);

  /**
   * unbind socket
   */
  bool unbind (const std::string &endpoint);

  /**
   * send data of size sz bytes
   */
  int send (const uint8_t * data, size_t sz, int flags);

  /**
   * send data string
   */
  int send (const std::string &data, int flags);
 
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

  // required to use subsasn
  string_vector map_keys (void) const { return fieldnames; }
  dim_vector dims (void) const { static dim_vector dv(1, 1); return dv; }

  octave_base_value * clone (void) const;
  octave_base_value * empty_clone (void) const;
  octave_base_value * unique_clone (void);

 /**
  * Overloaded methods to print sock as the zeromq id
  */
  void print (std::ostream& os, bool pr_as_read_syntax = false) const;
  void print (std::ostream& os, bool pr_as_read_syntax = false); 
  void print_raw (std::ostream& os, bool pr_as_read_syntax) const;

 /**
  * overloaded methods to get properties
  */
  octave_value_list subsref (const std::string& type, const std::list<octave_value_list>& idx, int nargout);

  octave_value subsref (const std::string& type, const std::list<octave_value_list>& idx)
  {
    octave_value_list retval = subsref (type, idx, 1);
    return (retval.length () > 0 ? retval(0) : octave_value ());
  }

  octave_value subsasgn (const std::string& type, const std::list<octave_value_list>& idx, const octave_value& rhs);

private:
  octave_zeromq_socket (const octave_zeromq_socket &);

  void * sock;
  int type;
  std::string endpoint;
  string_vector fieldnames;
#ifdef DECLARE_OCTAVE_ALLOCATOR
  DECLARE_OCTAVE_ALLOCATOR
#endif
  DECLARE_OV_TYPEID_FUNCTIONS_AND_DATA
};

#endif // ZEROMQ_SOCKET_CLASS_H
