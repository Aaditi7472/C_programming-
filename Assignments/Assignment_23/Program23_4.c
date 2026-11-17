// Function Name : Accept string from user and display only digits from that string 
// Description : used if else.
// Input :  marve89llous121 
// Output :
//           89121 
// Author : Aaditi ManojKumar Varma
// Date : 16/11/2026

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= '0' && str[iCnt] <= '9')
        {
            printf("%c", str[iCnt]);
        }
        iCnt++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string  : ");
    scanf("%[^'\n']s", arr);

    DisplayDigit(arr);

    return 0;
}