/**
 *@file tools.h
 *@author Adhish Majumdar
 *@version 0.0.0
 *@date 14/03/2013
 *@brief File with declarations for several functions used by different classes.
 *@details The functions declared in this file are for general use, like generating random numbers, getting a random binary number, etc. They do not belong to any particular class and thus may be called by objects of any class.
 */

#ifndef TOOLS_H
#define TOOLS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * Returns a random integer in the range of [min, max].
 * @param min The lower bound of the random number returned. Default value is 0.
 * @param max The upper bound of the random number returned. Default value is 100.
 */
int getRandomInteger (int min=0, int max=100);

/**
 * Returns a random binary value (true/false). This is done by selecting a random integer between 1 and 8 (inclusive), and then returning whether the number is prime or not. The range of 1 to 8 is chosen, because it is the largest range over which the number of primes is equal to the number of non-primes.
 */
bool getRandomBinary ();

/**
 * Returns whether the given integer n is prome or not.
 * @param n The integer that is to be tested for prime-ness(?).
 */
bool isPrime (int n);

#endif
