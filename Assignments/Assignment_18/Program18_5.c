// Function Name : Accept number of row and col, and display below pattern
// Description : used for and if else.
// Input : iRow = 4   iCol = 4
// Output :
//          1 2 3 4
//          1 * * 4
//          1 * * 4
//          1 2 3 4
// Author : Aaditi ManojKumar Varma
// Date : 09/11/2026

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow)
            {
                printf("%d\t", j);
            }
            else if(j == 1)
            {
                printf("1\t");
            }
            else if(j == iCol)
            {
                printf("%d\t", iCol);
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter number of columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}