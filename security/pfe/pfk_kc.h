/* Copyright (c) 2015, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef PFK_KC_H_
#define PFK_KC_H_

#include <linux/types.h>

int pfk_kc_init(void);
int pfk_kc_deinit(void);
int pfk_kc_load_key(const unsigned char *key, size_t key_size, u32 *key_index);
int pfk_kc_remove_key(const unsigned char *key, size_t key_size);
void pfk_kc_clear(void);



#endif /* PFK_KC_H_ */