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
    int a, b;
    do { std::cout << "a:"; std::cin >> a; } while (!(a > 0));
    do { std::cout << "b:"; std::cin >> b; } while (!(b > 0));

    int tmp;
    while(b > 0)
    {
        tmp = b;
        b = a % b;
        a = tmp;
    }

    std::cout << a << std::endl;

    return 0;
}
