#include <stdio.h>

int main(void)
{
    int secondOp = 0;
    printf("Enter second operand: ");
    while (scanf("%d", &secondOp) != 1 || secondOp <= 0)
    {
        while (getchar() != '\n');
        printf("Enter second operand: ");
    }

    int firstOp = 0;
    printf("Enter first operand: ");
    while (scanf("%d", &firstOp) == 1 && firstOp > 0)
    {
        while (getchar() != '\n');
        printf("%d %% %d is %d\n", firstOp, secondOp, firstOp % secondOp);
        printf("Enter first operand: ");
    }

    return 0;
}