// Function Name : Accept string from user and one character and return index of last occurence of that char
// Description : used if else.
// Input :  "Marvellous Multi OS"
//           M
// Output :
//          11
// Author : Aaditi ManojKumar Varma
// Date : 16/11/2026

#include<stdio.h>

int LastOcc(char *str, char ch)
{
    int iCnt = 0;
    int iIndex = -1;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            iIndex = iCnt;
        }
        else
        {
            // Do nothing
        }

        iCnt++;
    }

    return iIndex;
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

    iRet = LastOcc(arr, cValue);

    printf("Index of last occurrence : %d\n", iRet);

    return 0;
}