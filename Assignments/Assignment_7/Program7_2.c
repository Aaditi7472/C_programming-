//accept number from user and print that number of numbers on screen.
// input = 8
// output = 1 2 3 4 5 6 7 8

// Function Name : Print number till number which ic accepted from user
// Description : used for loop
// input : 8
// output = 1 2 3 4 5 6 7 8
// author = Aaditi Manojkumar Varma
// Date : 01/11/2026

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
