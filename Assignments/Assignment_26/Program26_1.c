// Function Name : program which displays ascii table (Symbol, Decimal, Hexadecimal and octal represntation of every member from 0 to 255)
// Description : used if else.
// Input :  
// Output :
//          
// Author : Aaditi ManojKumar Varma
// Date : 17/11/2026
#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("---------------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        if(iCnt >= 32 && iCnt <= 126)
        {
            printf("%c\t%d\t%X\t\t%o\n", iCnt, iCnt, iCnt, iCnt);
        }
        else
        {
            printf(" \t%d\t%X\t\t%o\n", iCnt, iCnt, iCnt, iCnt);
        }
    }
}

int main()
{
    DisplayASCII();

    return 0;
}