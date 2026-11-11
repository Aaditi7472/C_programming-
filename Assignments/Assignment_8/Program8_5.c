// Function Name : accept number from user and display its table in reverse.
// Description : used if elseif else
// input : 2
// output = 20 18 16 14 12 10 8 6 4 2 
// author = Aaditi Manojkumar Varma
// Date : 01/11/2026

#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
     for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    TableRev(iValue);
    return 0;
}
