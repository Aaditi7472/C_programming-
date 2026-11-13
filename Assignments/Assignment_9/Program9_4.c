// Function Name : find Odd factorial of given number
// Description : used if elseif else
// input : 5                    4
// output = 15(5*3*1)     3(3*1)
// author = Aaditi Manojkumar Varma
// Date : 01/11/2026

#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
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
        for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    if(iRet == -1)
    {
        printf("Invalid Number");
    }
    else
    {
        printf("Odd Factorial is : %d",iRet);
    }

    return 0;
}
