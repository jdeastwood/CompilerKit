/**
 * Copyright (C) 2012 The CompilerKit contributors.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
#include <glib.h>
#include "CompilerKit.h"

/**
 * test_print_visitor:
 * @fn test_print_visitor
 * Tests compilerkit_print_visitor.
 * @pre None
 * @param None
 * @return void
 */
void test_print_visitor (void)
{
    CompilerKitVisitor *print;
    
    g_test_message ("Testing Print visitor");
    g_test_timer_start ();
    
    /** @todo Test here  */
    print = compilerkit_print_visitor();
    g_assert(FALSE);
    
    g_object_unref (print);

    // This test shouldn't take too long to run
    g_assert_cmpfloat(g_test_timer_elapsed (), <=, 1);
}

