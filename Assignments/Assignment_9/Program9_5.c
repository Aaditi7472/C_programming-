// Function Name : returns difference between even and odd factorial
// Description : used if elseif else
// input : 5     -5
// output = -7    -7
// author = Aaditi Manojkumar Varma
// Date : 01/11/2026

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iOddFact = 1;
    int iEvenFact = 1;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    if(iNo < 0)
    {
        return -1;
    }
    else if(iNo == 0)
    {
        return 0;
    }
    else
    {
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iEvenFact = iEvenFact * iCnt;
            }
            else
            {
                iOddFact = iOddFact * iCnt;
            }
        }

        if(iOddFact > iEvenFact)
        {
            return iOddFact - iEvenFact;
        }
        else
        {
            return iEvenFact - iOddFact;
        }
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is : %d",iRet);

    return 0;
}
