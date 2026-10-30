//accept number from user and determine whether entered number is positive, negative or 0.

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if (iValue > 0)
    {
        printf("Number is positive\n");
    }
    else if(iValue < 0)
    {
        printf("Number is Negative\n");
    }
    else
    {
        printf("Number is zero");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a Number :\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}