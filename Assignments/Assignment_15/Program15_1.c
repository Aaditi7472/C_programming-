// Function Name : Accept name from user and prints it.
// Description : prints name.
// Input : Aaditi Varma
// Output : Aaditi Varma
// Author : Aaditi Manojkumar Varma
// Date : 04/11/2026

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name: ");
    scanf(" %29[^\n]",Name);

    printf("Your name is %s\n",Name);

    return 0;
}