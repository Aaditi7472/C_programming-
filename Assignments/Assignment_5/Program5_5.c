//accept one character from user and determine whether it is an 
// uppercase, lowercase or special character. use character comparoisons without using library 
//character classification functions

#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char CValue)
{
    char ch = CValue;

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter Character\n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return 0 ;
}