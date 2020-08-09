#ifndef UNIFORM_H
#define UNIFORM_H


/**
* Generate a random number between 0 and 1.
* @return a uniform random number in [0,1].
*/
double unif();

/**
* Generate a random number in a real interval.
* @param a one end point of the interval.
* @param b the other end point of the interval.
* @return a uniform random number in [0,1].
*/
double unif(double a, double b);

/**
19 * Generate a random integer between 1 and a given value.
20 * @param n the largest value this procedure can produce.
21 * @return a uniform random value in {1,2,...,n}.
22 */
long unif(long a);

/**
* Reset the random number generator based on the system clock.
*/
void seed();



#endif // !UNIFORM_H

