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
    int n;
    std::cout << "n:"; std::cin >> n;

    int a = 0, b = 1;
    for (int i = 0; i < n; ++i)
    {
        int tmp;
        if (i > 1)
        {
            tmp = a + b;
            a = b;
            b = tmp;
        }
        else
            tmp = i;

        std::cout << tmp << std::endl;
    }

    return 0;
}
