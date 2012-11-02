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

static void compilerkit_node_base_init (gpointer g_class)
{
    static gboolean initialized = FALSE;

    if (!initialized) {
        /* create interface signals here. */
        initialized = TRUE;
    }
}

GType compilerkit_node_get_type (void)
{
    static GType type = 0;
    if (type == 0) {
        static const GTypeInfo info = {
            sizeof (CompilerKitNodeInterface),
            compilerkit_node_base_init,   /* base_init */
            NULL,   /* base_finalize */
            NULL,   /* class_init */
            NULL,   /* class_finalize */
            NULL,   /* class_data */
            0,
            0,      /* n_preallocs */
            NULL    /* instance_init */
        };
        type = g_type_register_static (G_TYPE_INTERFACE, "CompilerKitNode", &info, 0);
    }
    return type;
}

void compilerkit_node_do_action (CompilerKitNode *self)
{
    COMPILERKIT_NODE_GET_INTERFACE (self)->do_action (self);
}



/*void compilerkit_node_do_action (CompilerKitNode *self)
  {
TODO: Find some reason for this Interface to exist. 
}*/
