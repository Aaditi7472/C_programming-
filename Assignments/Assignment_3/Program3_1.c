//accept one number from user and print that number of even numbers screen

#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)
    {
        return;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt * 2);
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0 ;
}