#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * @file squareRoot.c
 * @author Sebastian Ortiz
 * @date 28 Jun 2019
 */


/**
 * @brief Main function which returns the square root of a given number.
 * @param argc the number of parameters sended to the function as an integer.
 * @param *argv[] all paremeters sended to the main function as an string
 * @return the square root of the given number in the parameter argv[1] as a double
 * @note 
 */

/**
* Declares a variable of type double and sets its value
* from the main parameter *argv[] 
* 
* Used atof() function from <stdlib.h> to parse the string
* given as parameter to its respective value as a double
*/

/**
* Used sqrt() function from <math.h> to calculate the square root
* of the previously parsed number
*/

/** 
* @code{.c}
* int main(int argc, char *argv[])
* {
*    double number = atof(argv[1]);
*    return sqrt(number);
* };
 * @endcode
*/

int main(int argc, char *argv[])
{
    double number = atof(argv[1]);
    return sqrt(number);
};