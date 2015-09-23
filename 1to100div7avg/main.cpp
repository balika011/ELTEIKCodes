/*
 * Copyright (c) 2015, Balázs Triszka <balika011@protonmail.ch>
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

#include <iostream>

int main()
{
    int all = 0;

    for (int i = 7; i <= 100; i += 7)
        all += i;

    std::cout << (float)all / (float)(100 / 7) << std::endl;

    return 0;
}
