// Function Name : accept string and return frequency between small Characters and freq of capital character
//input : "MarvellouS"
// Output : 8   (8-2)
// Author : Aaditi ManojKumar Varma
// Date : 17/11/2026

#include<stdio.h>

int Difference(char *str)
{
    int iCnt = 0;
    int iSmall = 0;
    int iCapital = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'a' && str[iCnt] <= 'z')
        {
            iSmall++;
        }
        else if(str[iCnt] >= 'A' && str[iCnt] <= 'Z')
        {
            iCapital++;
        }

        iCnt++;
    }

    return (iSmall - iCapital);
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]",arr);

    iRet = Difference(arr);

    printf("Difference is : %d\n",iRet);

    return 0;
}