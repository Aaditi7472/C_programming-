// Function Name : Accept number of row and col, and display below pattern
// Description : used if else.
// Input : iRow = 3   iCol = 4
// Output :
//          1 1 1 1
//          2 2 2 2
//          3 3 3 3
//          4 4 4 4
// Author : Aaditi ManojKumar Varma
// Date : 13/11/2026

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow <= 0 || iCol <= 0)
    {
        printf("Invalid Input");
    }
    else
    {
        for(i = 1; i <= iCol; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(j <= iCol)
                {
                    printf("%d ", i);
                }
            }
            printf("\n");
        }
    }
}

int main()
{
    int iRow = 0, iCol = 0;

    printf("Enter number of rows : ");
    scanf("%d", &iRow);

    printf("Enter number of columns : ");
    scanf("%d", &iCol);

    Pattern(iRow, iCol);

    return 0;
}