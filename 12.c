#include <stdio.h>

int main()
{
    int num;
    printf("enter an integer :");
    scanf("%d", num);
    if (num >= 0)
    {
        if (num == 0)
        {
            printf("the number is zero");
        }
        else
        {
            printf("the number is positive");
        }
    }
    else
    {
        printf("the number is negative");
    }
    return 0;
}



