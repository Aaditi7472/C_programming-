// Function Name : Accept division from student and display division wise timimg.(A B C D four divisions)
// (A = 7AM , B = 8.30 AM, c = 9.20 AM, D = 10.30AM) (Case insensitive)
// Description : used if else.
// Input :  C
// Output :
//          Your Exam at 9.20 AM
// Author : Aaditi ManojKumar Varma
// Date : 17/11/2026

#include<stdio.h>

void DisplayTime(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Your Exam at 7 AM\n");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("Your Exam at 8.30 AM\n");
    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("Your Exam at 9.20 AM\n");
    }
    else if(ch == 'D' || ch == 'd')
    {
        printf("Your Exam at 10.30 AM\n");
    }
    else
    {
        printf("Invalid Division\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : ");
    scanf("%c", &cValue);

    DisplayTime(cValue);

    return 0;
}