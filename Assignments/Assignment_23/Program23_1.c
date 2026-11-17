// Function Name : Accept string from user and convert it into lower case
// Description : used if else.
// Input :  "Marvellous Multi OS"
// Output :
//          marvellous multi os 
// Author : Aaditi ManojKumar Varma
// Date : 16/11/2026

#include<stdio.h>

void strlwrx(char *str)
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
            if(str[iCnt] >= 'A' && str[iCnt] <= 'Z')
            {
                str[iCnt] = str[iCnt] + 32;
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

    strlwrx(arr);

    printf("Modified string is %s ",arr);

    return 0;
}