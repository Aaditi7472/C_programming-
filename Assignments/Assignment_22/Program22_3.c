// Function Name : Accept number of row and col, and display below pattern
// Description : used if else.
// Input :  5
// Output :
//         1 * 2 * 3 * 4 * 5 *  
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
            if(iCnt >= 1)
            {
                printf("%d * ", iCnt);
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