// Function Name : accept amount in us dollar and return its corresponding value in indian currency.(consider 1$ as 70rs)
// Description : used if elseif else
// input : 10
// output = 700
// author = Aaditi Manojkumar Varma
// Date : 01/11/2026

#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iResult = 0;
    
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    if(iNo > 0)
    {
        iResult = iNo * 70;
    }
    else
    {
        return 0;
    }

    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);


    iRet = DollarToINR(iValue);

    if(iRet == 0)
    {
        printf("Invalid Amount");
    }
    else
    {
        printf("Indian Currency is : %d",iRet);
    }

    DollarToINR(iValue);
    return 0;
}
