// Function Name : Accept string from user and convert it into upper case
// Description : used if else.
// Input :  marvellous multi os
// Output :
//           MARVELLOUS MULTI OS 
// Author : Aaditi ManojKumar Varma
// Date : 16/11/2026

#include<stdio.h>
#include<stdlib.h>

void struprx(char *str)
{
    int iCnt = 0;

    if(str == NULL)
    {
        return;
    }
    else
    {
        while(str[iCnt] != '\0')
        {
            if(str[iCnt] >= 'a' && str[iCnt] <= 'z')
            {
                str[iCnt] = str[iCnt] - 32;
            }
            iCnt++;
        }
    }
}
int main()
{
    char arr[20];

    printf("Enter string  : ");
    scanf("%[^'\n']s", arr);

    struprx(arr);

    printf("Modified string is %s ",arr);

    return 0;
}