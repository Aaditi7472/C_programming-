// Function Name : Accept string from userand one character and check that character is present in string or not  
// Description : used if else.
// Input :  "Marvellous Multi OS"
//             e
// Output :
//          TRUE
// Author : Aaditi ManojKumar Varma
// Date : 16/11/2026

#include<stdio.h>

#define TRUE 1
#define FALSE 0

int CheckChar(char *str, char ch)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            return TRUE;
        }
        else
        {
            // Do nothing
        }

        iCnt++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string : ");
    scanf(" %[^\n]", arr);

    printf("Enter character : ");
    scanf(" %c", &cValue);

    iRet = CheckChar(arr, cValue);

    if(iRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}