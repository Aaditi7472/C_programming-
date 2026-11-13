
// Function Name : Accept number of row and col, and display below pattern
// Description : used for and if else.
// Input : iRow = 4   iCol = 4
// Output : 1 2 3 4
//          5 6 7 8
//          9 1 2 3
//          4 5 6 7
// Author : Aaditi ManojKumar Varma
// Date : 09/11/2026

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNum);

            if(iNum == 9)
            {
                iNum = 1;
            }
            else
            {
                iNum++;
            }
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}