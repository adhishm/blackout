/**
 *@file tools.cpp
 *@author Adhish Majumdar
 *@version 0.0.0
 *@date 14/03/2013
 *@brief File with definitions for several functions used by different classes.
 *@details The functions defined in this file are for general use, like generating random numbers, getting a random binary number, etc. They do not belong to any particular class and thus may be called by objects of any class.
 */

/*
    DD2D-Matryoshka approach.
    A set of classes defining the behaviour of crystalline defects,
    with the final goal of carrying out dislocation dynamics simulations
    in two dimensions.
    Copyright (C) 2013  Adhish Majumdar

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "tools.h"

/**
 * Returns a random integer in the range of [min, max].
 * @param min The lower bound of the random number returned. Default value is 0.
 * @param max The upper bound of the random number returned. Default value is 100.
 */
int getRandomInteger (int min, int max)
{
  double s = rand ();
  s = min + ((max-min)*(s/RAND_MAX));
  return ( (int) s );
}

/**
 * Returns a random binary value (true/false). This is done by selecting a random integer between 1 and 8 (inclusive), and then returning whether the number is prime or not. The range of 1 to 8 is chosen, because it is the largest range over which the number of primes is equal to the number of non-primes.
 */
bool getRandomBinary ()
{
  return isPrime( getRandomInteger (1, 8) );
}

/**
 * Returns whether the given integer n is prome or not.
 * @param n The integer that is to be tested for prime-ness(?).
 */
bool isPrime (int n)
{
  if (n <= 1)
    {
      return (false);
    }
  else
    {
      int i= 2;
      int j = (n/2);
      while (i <= j)
	{
	  if ((n%i) == 0)
	    {
	      // The remainder from division was zero, so n is not prime!
	      return (false);
	    }
	  else
	    {
	      i++;
	    }
	}
      // We went through the entire loop, so n is prime.
      return (true);
    }
}

