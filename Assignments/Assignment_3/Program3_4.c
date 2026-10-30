//accept one character from user and change case of that character.

#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char CValue)
{
    char ch = CValue;

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c", ch + 32);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c", ch - 32);
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter Character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0 ;
}