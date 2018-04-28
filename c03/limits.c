#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void)
{
    printf("INT_MAX = %d\n", INT_MAX);
    printf("%d\n", INT_MAX + 1);
    printf("\n");

    printf("FLT_MAX = %.10e\n", FLT_MAX);
    printf("FLT_MIN = %.10e\n", FLT_MIN);
    printf("\n");

    printf("%.10e\n", FLT_MAX + 1e38);          //  interprets as double, not float
    printf("%.10e\n", FLT_MAX + 1e38f);         //  overflows
    printf("%.10e\n", FLT_MAX + 1e30f);         //  doesn't overflow
    printf("%.10e\n", FLT_MAX + 1e32f);         //  overflows
    
    printf("\n");
    return 0;
}