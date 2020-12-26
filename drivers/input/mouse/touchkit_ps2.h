/* SPDX-License-Identifier: GPL-2.0-only */
/* ----------------------------------------------------------------------------
 * touchkit_ps2.h  --  Driver for eGalax TouchKit PS/2 Touchscreens
 *
 * Copyright (C) 2005 by Stefan Lucke
 * Copyright (c) 2005 Vojtech Pavlik
 */

#ifndef _TOUCHKIT_PS2_H
#define _TOUCHKIT_PS2_H

#ifdef CONFIG_MOUSE_PS2_TOUCHKIT
int touchkit_ps2_detect(struct psmouse *psmouse, bool set_properties);
#else
static inline int touchkit_ps2_detect(struct psmouse *psmouse,
				      bool set_properties)
{
	return -ENOSYS;
}
#endif /* CONFIG_MOUSE_PS2_TOUCHKIT */

#endif
