// Function Name : Accept range and return addition of all even numbers within that range
// Description : Used if and for loop
// Input : 23 30
// Output : 108
// Author : Aaditi Manojkumar Varma
// Date : 02/11/2026

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart <= 0 || iEnd <= 0 || iStart > iEnd)
    {
        printf("Invalid range");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    if(iValue1 > 0 && iValue2 > 0 && iValue1 <= iValue2)
    {
        printf("Addition of even numbers is: %d",iRet);
    }

    return 0;
}