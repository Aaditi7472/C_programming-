// Function Name : accept charcter from user and if its captial then display all character from input till z
// if small then display all till a and in other cases return directly
//input : U                 d           4
// Output : U V W X Y Z     d c b a 
// Author : Aaditi ManojKumar Varma
// Date : 17/11/2026

#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c ",iCnt);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c ",iCnt);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}