/* Copyright (C) 2013-2015 PUC-Rio/Laboratorio TeleMidia

This file is part of NCLua.

NCLua is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

NCLua is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
License for more details.

You should have received a copy of the GNU General Public License
along with NCLua.  If not, see <http://www.gnu.org/licenses/>.  */

#include "tests.h"

int
main (void)
{
  /* Checks if call aborts when 'require' is not defined in L.  */
  TEST_BEGIN
  {
    lua_State *L;
    L = luaL_newstate ();
    assert (L != NULL);
    nclua_open (L, 800, 600, NULL);
  }
  TEST_END;

  exit (EXIT_SUCCESS);
}
