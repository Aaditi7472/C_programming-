// Function Name : find even factorial of given number
// Description : used if elseif else
// input : 5                    4
// output = 8 (4*2)     8(4*2)
// author = Aaditi Manojkumar Varma
// Date : 01/11/2026

#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
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
        return 1;
    }
    else
    {
        for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

     iRet = EvenFactorial(iValue);
     printf("Factorial of number is : %d",iRet);

    return 0;
}
