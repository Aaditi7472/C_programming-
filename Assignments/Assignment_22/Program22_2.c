// Function Name : Accept number of row and col, and display below pattern
// Description : used if else.
// Input :  5
// Output :
//         5 # 4 # 3 # 2 # 1 #   
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
        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            if(iCnt >= 1)
            {
                printf("%d # ", iCnt);
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