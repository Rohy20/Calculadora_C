#include "advanced.h"
#include <math.h>

double power(double base, double exponent){
    return pow(base, exponent);
}

double squareRoot(double number){
    return sqrt(number);
}

double percentage(double number, double percent){
    return (number * percent) / 100.0;
}

double modulus(double number){
    return fabs(number);
}

double inversion(double number){
    return 1.0 / number;
}