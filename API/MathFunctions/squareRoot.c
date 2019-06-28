#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double square_root_of(double number){
    return sqrt(number);
};

int main(int argc, char *argv[]){
    double number = atof(argv[1]);
    double result_of_square_root;
    result_of_square_root = square_root_of(number);
    printf("%.2f", result_of_square_root);
    return result_of_square_root;
};