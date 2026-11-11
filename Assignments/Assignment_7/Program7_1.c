//accept number from user and print that number of $ *  on screen.
// input = 4
// output = $ * $ * $ * $ *

// Function Name : Print $ * on screen 
// Description : used for loop
// input : 4
// output = $ * $ * $ * $ * 
// author = Aaditi Manojkumar Varma
// Date : 01/11/2026

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ ");
        printf("* ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
