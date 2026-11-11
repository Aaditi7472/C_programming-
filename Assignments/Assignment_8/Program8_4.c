// Function Name : accept number from user and display its table
// Description : used if elseif else
// input : 2
// output = 2 4 6 8 10 12 14 16 18 20
// author = Aaditi Manojkumar Varma
// Date : 01/11/2026

#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Table(iValue);
    return 0;
}
