/*
 * Copyright (C) 2023 Carson Schildt
 * Author: John Doe <tetraos.team@gmail.com>
 * Date: 21-06-2024
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef EVENT_H
#define EVENT_H

#include <X11/Xlib.h>

void event_loop(Display *display, Window root);

#endif // EVENT_H