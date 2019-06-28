#include <stdio.h>

/**
 * Method: Consumes/calls the getSquareRoot.exe file
 * to get the square root of a given number
 * Parameter: Any positive number
 */
int main(int argc, char *argv[])
{
    /**
     * Used system() function which alloes this program
     * to run another program by passing a command line
     * by string - Example(getSquareRoot.exe 30)
     */
    return system(argv[1]);
};