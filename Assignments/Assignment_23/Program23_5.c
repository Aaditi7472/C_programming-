// Function Name : Accept string from user and count number if white spaces 
// Description : used if else.
// Input :  marvellous infosystems 
// Output :
//           1 
// Author : Aaditi ManojKumar Varma
// Date : 16/11/2026

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;
    int iCount = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ' ')
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
    int iRet = 0;

    printf("Enter string : ");
    scanf(" %[^\n]", arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}