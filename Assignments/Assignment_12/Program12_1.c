// Function Name : Accept number and return its digits in reverse order.
// Description : used while loop
// Input : 2395
// Output : 5
//          9
//          3
//          2
// Author : Aaditi Manojkumar Varma
// Date : 03/11/2026

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);

        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}