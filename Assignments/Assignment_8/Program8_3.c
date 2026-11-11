// Function Name : find factorial of given number
// Description : used if elseif else
// input : 5                    4
// output = 120 (5*4*3*2*1)     24(4*3*2*1)
// author = Aaditi Manojkumar Varma
// Date : 01/11/2026

#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
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
        for(iCnt = 1; iCnt <= iNo; iCnt++)
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

     iRet = Factorial(iValue);
     printf("Factorial of number is : %d",iRet);

    return 0;
}
