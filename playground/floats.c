#include<stdio.h>
#include<inttypes.h>
#include<stdbool.h>

int main(void)
{
    float myFloat_1 = 2.457802353;
    printf("myFloat_1:\t%20.15f\n", myFloat_1);

    double myDouble_1 = 2.123456789123456789;
    printf("myDouble_1:\t%20.20f\n", myDouble_1);

    printf("uint32_t: %zd\n", sizeof(uint32_t));

    bool myBool = true;

    _Bool jim = 0;

    return 0;
}