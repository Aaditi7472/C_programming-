// Function Name : Accept total and obtained marks and cal percentage.
// Description : used if else.
// Input : 1000  745
// Output : 74.5%
// Author : Aaditi Manojkumar Varma
// Date : 04/11/2026

#include<stdio.h>

float Percentage(int iTotal, int iObtained)
{
    float fResult = 0.0f;

    if(iTotal == 0)
    {
        return 0.0f;
    }

    fResult = ((float)iObtained / iTotal) * 100;

    return fResult;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is %.1f%%\n",fRet);

    return 0;
}