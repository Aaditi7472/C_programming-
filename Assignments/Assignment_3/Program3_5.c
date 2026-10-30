//accept one character from user and check whether that charcter is vowel(a e i o u ) or not? true or false

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

int CheckVowel(char CValue)
{
    char ch = CValue;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
    {
        return TRUE;
    }
    else
    {
       return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }
    return 0 ;
}