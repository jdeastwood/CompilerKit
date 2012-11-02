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
#include "CompilerKit/node.h"

G_DEFINE_INTERFACE (CompilerKitNode, compilerkit_node, G_TYPE_OBJECT);

static void
compilerkit_node_default_init (CompilerKitNodeInterface *iface)
{
      /* add properties and signals here, will only called once */
}

void compilerkit_node_do_action (CompilerKitNode *self)
{
    COMPILERKIT_NODE_GET_INTERFACE (self)->do_action (self);
}



/*void compilerkit_node_do_action (CompilerKitNode *self)
  {
TODO: Find some reason for this Interface to exist. 
}*/
