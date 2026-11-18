// Function Name : accept string and check whether it contains vowels or not
//input : marvellous   xyz
// Output : TRUE        FALSE
// Author : Aaditi ManojKumar Varma
// Date : 17/11/2026

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == 'a' || str[iCnt] == 'e' ||
           str[iCnt] == 'i' || str[iCnt] == 'o' ||
           str[iCnt] == 'u' || str[iCnt] == 'A' ||
           str[iCnt] == 'E' || str[iCnt] == 'I' ||
           str[iCnt] == 'O' || str[iCnt] == 'U')
        {
            return TRUE;
        }

        iCnt++;
    }

    return FALSE;
}

int main()
{
    char arr[50];
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf(" %[^\n]",arr);

    bRet = CheckVowel(arr);

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