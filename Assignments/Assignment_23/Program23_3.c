// Function Name : Accept string from user and convert it into toggle the  case
// Description : used if else.
// Input :  Marvellous Multi OS
// Output :
//           mARVELLOUS mULTI os 
// Author : Aaditi ManojKumar Varma
// Date : 16/11/2026

#include<stdio.h>
#include<stdlib.h>

void strtogglex(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'A' && str[iCnt] <= 'Z')
        {
            str[iCnt] = str[iCnt] + 32;
        }
        else if(str[iCnt] >= 'a' && str[iCnt] <= 'z')
        {
            str[iCnt] = str[iCnt] - 32;
        }

        iCnt++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string  : ");
    scanf("%[^'\n']s", arr);

    strtogglex(arr);

    printf("Modified string is %s ",arr);

    return 0;
}