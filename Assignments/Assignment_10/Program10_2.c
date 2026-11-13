
// Function Name : Accept width and height of rectangle and calculate its area.
// Description : Used if elseif else
// Input : 5 4
// Output : 20
// Author : Aaditi Manojkumar Varma
// Date : 01/11/2026

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{ 
    double dArea = 0.0;

    if(fWidth < 0 || fHeight < 0)
    {
        return -1;
    }
    else if(fWidth == 0 || fHeight == 0)
    {
        return 0;
    }
    else
    {
        dArea = fWidth * fHeight;
    }

    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0;

    printf("Enter Width: \n");
    scanf("%f",&fValue1);

    printf("Enter Height: \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    if(dRet == -1)
    {
        printf("Invalid Dimensions");
    }
    else
    {
        printf("Area of Rectangle is : %lf",dRet);
    }

    return 0;
}
