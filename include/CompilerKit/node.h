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
#ifndef __COMPILERKIT_NODE_H__
#define __COMPILERKIT_NODE_H__

#include <glib-object.h>
G_BEGIN_DECLS
#define COMPILERKIT_TYPE_NODE                 (compilerkit_node_get_type ())
#define COMPILERKIT_NODE(obj)                 (G_TYPE_CHECK_INSTANCE_CAST ((obj), COMPILERKIT_TYPE_NODE, CompilerKitNode))
#define COMPILERKIT_IS_NODE(obj)              (G_TYPE_CHECK_INSTANCE_TYPE ((obj), COMPILERKIT_TYPE_NODE))
#define COMPILERKIT_NODE_GET_INTERFACE(inst)  (G_TYPE_INSTANCE_GET_INTERFACE ((inst), COMPILERKIT_TYPE_NODE, CompilerKitNodeInterface))

typedef struct _CompilerKitNode               CompilerKitNode; /* dummy object */

typedef struct _CompilerKitNodeInterface
{
    GTypeInterface parent_iface;
    void (*do_action) (CompilerKitNode *self);
};

GType compilerkit_node_get_type (void);

void compilerkit_node_do_action (CompilerKitNode *self);

G_END_DECLS
#endif /* __COMPILERKIT_NODE_H__ */
