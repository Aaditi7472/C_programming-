// Function Name : accept number from user and prints below pattern
// Description : used if elseif else
// input : 5
// output =  * * * * * # # # # #
// author = Aaditi Manojkumar Varma
// Date : 01/11/2026

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
  int iCnt = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    if(iNo <= 0)
    {
        printf("Invalid Input");
    }
    else
    {
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("* ");
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("# ");
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
