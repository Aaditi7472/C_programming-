// Function Name :accept radius from user and calculates its area consider pi as 3.14.
// Description : used if elseif else
// input : 5.3
// output = 88.2026   
// author = Aaditi Manojkumar Varma
// Date : 01/11/2026

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    if(fRadius < 0)
    {
        return -1;
    }
    else if(fRadius == 0)
    {
        return 0;
    }
    else
    {
        dArea = 3.14 * fRadius * fRadius;
    }

    return dArea;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter Number : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %lf",dRet);

    return 0;
}
