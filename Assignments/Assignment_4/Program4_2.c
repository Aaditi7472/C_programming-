//accept number from user and determine whether entered number is even  or odd.

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
    if (iValue % 2 == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a Number :\n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}