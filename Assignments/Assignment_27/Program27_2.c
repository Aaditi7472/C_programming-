// Function Name : accept string and count number of small letters
//input : "Marvellous Multi OS"
// Output : 13
// Author : Aaditi ManojKumar Varma
// Date : 17/11/2026
#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;
    int iCount = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'a' && str[iCnt] <= 'z')
        {
            iCount++;
        }

        iCnt++;
    }

    return iCount;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter string : ");
    scanf(" %[^\n]",arr);

    iRet = CountSmall(arr);

    printf("Number of small letters : %d\n",iRet);

    return 0;
}