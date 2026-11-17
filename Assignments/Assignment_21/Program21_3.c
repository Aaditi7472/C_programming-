// Function Name : Accept number of row and col, and display below pattern
// Description : used if else.
// Input : iRow = 3   iCol = 5
// Output :
//          5 4 3 2 1
//          5 4 3 2 1
//          5 4 3 2 1
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
        for(i = 1; i <= iRow; i++)
        {
            for(j = iCol; j >= 1; j--)
            {
                if(j >= 1)
                {
                    printf("%d ", j);
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