// Function Name : accept string and count number of capotal letter
//input : "Marvellous Multi OS"
// Output : 4
// Author : Aaditi ManojKumar Varma
// Date : 17/11/2026

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    int iCount = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'A' && str[iCnt] <= 'Z')
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

    iRet = CountCapital(arr);

    printf("Number of capital letters : %d\n",iRet);

    return 0;
}