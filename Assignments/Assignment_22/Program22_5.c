// Function Name : Accept number of row and col, and display below pattern
// Description : used if else.
// Input :  8
// Output :
//          2 4 6 8 10 12 14 16 
// Author : Aaditi ManojKumar Varma
// Date : 13/11/2026

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        printf("Invalid Input");
    }
    else
    {
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                printf("%d ", iCnt * 2);
            }
            else
            {
                printf("%d ", iCnt * 2);
            }
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}