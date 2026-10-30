// accept number from user and if number is less than 10n then print Hello otherwise prit Demo.

#include<stdio.h>

void Diplay(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter number :");
    scanf("%d",&iValue);

    Diplay(iValue);

    return 0;
}