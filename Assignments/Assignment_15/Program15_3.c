// Function Name : Accept numbers and check whether numbers are equal or not 
// Description : used if else.
// Input : 101        39
// Output : Greater  smaller
// Author : Aaditi Manojkumar Varma
// Date : 04/11/2026

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter first number: ");
    scanf("%d",&iValue1);

    printf("Enter second number: ");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;
}