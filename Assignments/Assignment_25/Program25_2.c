// Function Name : Accept character from user and check whether it is Captial or not(A-z)
// Description : used if else.
// Input :  "F"   d
// Output :
//          TRUE    FALSE
// Author : Aaditi ManojKumar Varma
// Date : 17/11/2026

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    printf("Enter character : ");
    scanf("%c", &cValue);

    bRet = CheckCapital(cValue);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}