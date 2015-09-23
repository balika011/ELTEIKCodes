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
    int N;

    std::cout << "N:"; std::cin >> N;

    unsigned long long int out = 1;
    for (int i = 1; i <= N; ++i)
    {
        out *= i;

        std::cout << out << std::endl;
    }

    return 0;
}
