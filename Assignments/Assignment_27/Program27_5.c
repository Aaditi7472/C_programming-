// Function Name : accept string and display it in reverse orderx
//input : "MarvellouS"
// Output : "SuollevraM"
// Author : Aaditi ManojKumar Varma
// Date : 17/11/2026

#include<stdio.h>

void Reverse(char *str)
{
    int iCnt = 0;
    int iLength = 0;

    while(str[iLength] != '\0')
    {
        iLength++;
    }

    for(iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        printf("%c",str[iCnt]);
    }
}

int main()
{
    char arr[50];

    printf("Enter string : ");
    scanf(" %[^\n]",arr);

    Reverse(arr);

    return 0;
}