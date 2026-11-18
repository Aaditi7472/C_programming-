// Function Name : accept charcter from user and display its ascii value in decimal, hexadecimal and octal format)
// input :  A
// Output : Decimal 65
//          Octal 0101
//          Hexadecimal 0X41
// Author : Aaditi ManojKumar Varma
// Date : 17/11/2026

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal : %d\n",ch);
    printf("Octal : 0%o\n",ch);
    printf("Hexadecimal : 0X%X\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}