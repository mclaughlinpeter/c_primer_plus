#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    char a[20] = "hello ";
    char b[] = { 'w', 'o', 'r', 'l', 'd', '!', '\0'};

    a[0] = 'H';
    char *c = strcat(a, b);
    printf("The string c is: %s\n", c);
    printf("The length of c is: %lu\n", strlen(c));

    char *p = strchr(c, 'w');
    *p = 'W';
    printf("The string c is now: %s\n", c);

    if (strcmp("cat", "dog") <= 0)
    {
        printf("cat comes before dog lexiographically\n");
    }

    char *d = " to the";
    char *cd = malloc(strlen(c) + strlen(d));
    memcpy(cd, c, 5);
    memcpy(cd+5, d, strlen(d));
    memcpy(cd+5+strlen(d), c+5, 6);
    printf("The cd string is: %s\n", cd);

    p = strtok(cd, " ");
    while (p != NULL)
    {
        printf("Token:\t%s\n", p);
        p = strtok(NULL, " ");
    }

    return 0;
}