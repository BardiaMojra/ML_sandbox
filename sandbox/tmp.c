
#include <stdlib.h>
#include <stdio.h>

int ishappy(int);

int main(void)
{

    int x = ishappy(19);

    printf("The number is: %d ", x);
    return 0;
}

int ishappy(int x)
{
    int sum = 0;
    int cond = x;
    while (cond > 0)
    {
        cond /= 10;
        int right = x;
        right = right % 10;
        sum += right * right;
        if (sum == 1)
        {
            return 1;
        }
    }
    return -1;
}
