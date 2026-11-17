// Function Name : Accept string from userand one character and return freq of that character
// Description : used if else.
// Input :  "Marvellous Multi OS"
//           M
// Output :
//          2
// Author : Aaditi ManojKumar Varma
// Date : 16/11/2026

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;
    int iCount = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            iCount++;
        }
        else
        {
            // Do nothing
        }

        iCnt++;
    }

    return iCount;
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

    iRet = CountChar(arr, cValue);

    printf("Frequency of %c is : %d\n", cValue, iRet);

    return 0;
}