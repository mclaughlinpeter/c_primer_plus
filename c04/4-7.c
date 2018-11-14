#include <stdio.h>
#include <float.h>

int main(void)
{
    double myDouble = 1.0 / 3.0;

    float myFloat = 1.0 / 3.0;

    printf("%.4f\n%.12f\n%.16f\n\n", myDouble, myDouble, myDouble);

    printf("%.4f\n%.12f\n%.16f\n\n", myFloat, myFloat, myFloat);

    printf("DBL_DIG: %d\n", DBL_DIG);
    printf("FLT_DIG: %d\n", FLT_DIG);
    
    return 0;
}