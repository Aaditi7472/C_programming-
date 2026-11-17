// Function Name : Accept string from user and reverse that string in place
// Description : used if else.
// Input :  "abcd"
// Output :
//          "dcba"
// Author : Aaditi ManojKumar Varma
// Date : 16/11/2026

#include<stdio.h>

void StrRevX(char *str)
{
    int iStart = 0;
    int iEnd = 0;
    char temp = '\0';

    while(str[iEnd] != '\0')
    {
        iEnd++;
    }

    iEnd--;

    while(iStart < iEnd)
    {
        if(iStart < iEnd)
        {
            temp = str[iStart];
            str[iStart] = str[iEnd];
            str[iEnd] = temp;
        }

        iStart++;
        iEnd--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf(" %[^\n]", arr);

    StrRevX(arr);

    printf("Reversed string : %s\n", arr);

    return 0;
}