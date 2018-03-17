#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    int a[] = {10, 20, 30, 40, 50};
    int *b = a;
    printf("Int: %d\n", *b);
    printf("Int: %d\n", *b++);      // increment pointer but deref previous position
    printf("Int: %d\n", *b);
    printf("Int: %d\n", *++b);      // increment pointer and deref new position
    printf("Int: %d\n", ++*b);      // deref then increment deref'd value
    printf("Int: %d\n", *b);
    printf("Int: %d\n", (*b)++);    // deref then increment deref'd value
    printf("Int: %d\n", *b);
    printf("Int: %d\n", ++(*b));    // same as ++*b
    printf("Int: %d\n", *b);

    return 0;
}