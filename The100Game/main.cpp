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
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time(NULL));

    int guessme = rand() % 101;
    int guess = 0;

    do
    {
        std::cout << "Guess: "; std::cin >> guess;
        if (guess < guessme)
            std::cout << "Your gess too low!" << std::endl;
        else if(guess > guessme)
            std::cout << "Your gess too high!" << std::endl;
    } while(guess != guessme);

    std::cout << "OMG!!! YOU DID IT!!! :D" << std::endl;

    return 0;
}
