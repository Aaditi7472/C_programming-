// Function Name : Accept range and display its factors in dec order
// Description : used for loop 
// Input : 12 
// Output : 6 4 3 2 1
// Author : Aaditi Manojkumar Varma
// Date : 04/11/2026

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
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

    FactRev(iValue);

    return 0;
}