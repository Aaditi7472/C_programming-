// Function Name : accept single digit from user and print it into word.
// Description : used if elseif else
// input : 9        12         -3
// output = Nine   Invalid   Three
// author = Aaditi Manojkumar Varma
// Date : 01/11/2026

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        printf("Zero");
    }
    else if(iNo == 1)
    {
        printf("One");
    }
    else if(iNo == 2)
    {
        printf("Two");
    }
    else if(iNo == 3)
    {
        printf("Three");
    }
    else if(iNo == 4)
    {
        printf("Four");
    }
    else if(iNo == 5)
    {
        printf("Five");
    }
    else if(iNo == 6)
    {
        printf("Six");
    }
    else if(iNo == 7)
    {
        printf("Seven");
    }
    else if(iNo == 8)
    {
        printf("Eight");
    }
    else if(iNo == 9)
    {
        printf("Nine");
    }
    else
    {
        printf("Invalid");
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
