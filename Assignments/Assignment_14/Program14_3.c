// Function Name : Accept range and display its non factors
// Description : used for loop 
// Input : 10
// Output : 3 4 6 7 8 9
// Author : Aaditi Manojkumar Varma
// Date : 04/11/2026

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}