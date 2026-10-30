//accept two integers from user determine which is greater if both are equal print appropriate message.

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst , int iSecond)
{
    if (iFirst > iSecond)
    {
        printf("Greater number is: %d\n",iFirst);
    }
    else if (iSecond > iFirst)
    {
         printf("Greater number is:%d\n",iSecond);
    }
    else
    {
        printf("Numbers are equal:%d %d \n",iFirst ,iSecond);
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;    

    printf("Enter two Numbers :\n");
    scanf("%d %d",&iValue1 ,&iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}