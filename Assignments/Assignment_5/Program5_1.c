//accept three integers find greatest number among them . 

#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst , int iSecond, int iThird)
{
    if (iFirst > iSecond && iFirst > iThird ) 
    {
        printf("Greatest number is: %d\n",iFirst);
    }
    else if (iSecond > iFirst &&  iSecond > iThird)
    {
         printf("Greatest number is:%d\n",iSecond);
    }
    else if (iThird > iFirst &&  iThird > iSecond)
    {
         printf("Greatest number is:%d\n",iThird);
    }
    else
    {
        printf("Numbers are equal:%d %d %d\n",iFirst ,iSecond, iThird);
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;    

    printf("Enter three Numbers :\n");
    scanf("%d %d %d",&iValue1 ,&iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}