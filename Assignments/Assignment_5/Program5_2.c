//accept a year and determines whether its leap year or not  

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if ((iYear % 100 == 0) || (iYear % 4 == 0 && iYear % 100 != 0)) 
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a Leap year\n");
    }
}
int main()
{
    int iYear = 0;    

    printf("Enter Year :\n");
    scanf("%d",&iYear);

   CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}