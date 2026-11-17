// Function Name : Accept string from user and one character and return index of 1st occurence of that char
// Description : used if else.
// Input :  "Marvellous Multi OS"
//           M
// Output :
//          0
// Author : Aaditi ManojKumar Varma
// Date : 16/11/2026

#include<stdio.h>

int FirstOcc(char *str, char ch)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            return iCnt;
        }
        else
        {
            // Do nothing
        }

        iCnt++;
    }

    return -1;
}

int main()
{
    char arr[50];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string : ");
    scanf(" %[^\n]", arr);

    printf("Enter character : ");
    scanf(" %c", &cValue);

    iRet = FirstOcc(arr, cValue);

    printf("Index of first occurrence : %d\n", iRet);

    return 0;
}