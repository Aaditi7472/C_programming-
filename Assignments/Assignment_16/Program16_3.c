
// Function Name : Accept number of row and col , and display below pattern
// Description : used for and if else.
// Input : iRow = 3   iCol = 5
// Output : A A A A A
//          B B B B B
//          C C C C C
// Author : Aaditi Manojkumar Varma
// Date : 09/11/2026

#include<stdio.h>

float Percentage(int iTotal, int iObtained)
{
    float fPercentage = 0.0f;

    if(iTotal == 0)
    {
        return 0.0f;
    }

    fPercentage = ((float)iObtained / iTotal) * 100;

    return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks:\n");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks:\n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is: %.2f%%\n", fRet);

    return 0;
}