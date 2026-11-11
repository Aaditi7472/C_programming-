// Function Name : if no is less than 50 then print small, if greater than 50 and less than 100 then medium
                    //and if greater than 100 print large.
// Description : used if else
// input : 70
// output = Medium
// author = Aaditi Manojkumar Varma
// Date : 01/11/2026

#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    
    if (iNo < 50)
    {
        printf("Small\n");
    }
    else if (iNo > 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else if(iNo > 100)
    {
        printf("Large\n");
    }
    else
    {
        printf("Number is 50 or 100\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

   Number(iValue);

    return 0;
}
