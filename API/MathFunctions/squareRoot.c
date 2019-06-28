#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Method: Returns the square root of a given number
 * Parameter: Any positive number
 */
int main(int argc, char *argv[])
{
    /**
     * Declares a variable of type double and sets its value
     * from the main parameter *argv[] 
     * 
     * Used atof() function from <stdlib.h> to parse the string
     * given as parameter to its respective value as a double
     */
    double number = atof(argv[1]);

    /**
     * Used sqrt() function from <math.h> to calculate the square root
     * of the previously parsed number
     */
    return sqrt(number);
};