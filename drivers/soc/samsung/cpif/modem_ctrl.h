/*
 * Copyright (C) 2019 Samsung Electronics.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __MODEM_CTRL_H__
#define __MODEM_CTRL_H__

#define MIF_INIT_TIMEOUT	(15 * HZ)

void modem_ctrl_set_kerneltime(struct modem_ctl *mc);
void change_modem_state(struct modem_ctl *mc, enum modem_state state);

#endif /* __MODEM_CTRL_H__ */
