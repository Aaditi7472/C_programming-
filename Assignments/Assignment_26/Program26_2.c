// Function Name : accept charcter from user and if char is small then display its corresponding captial and vice versa and keep other case as it is 
// Input :  q   4   %   A
// Output : Q   4   %   a
// Author : Aaditi ManojKumar Varma
// Date : 17/11/2026

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else
    {
        // Keep character as it is
    }

    printf("Converted character is : %c\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}