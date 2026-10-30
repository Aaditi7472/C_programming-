//accept the total purchase amount and calculate the final payable amount after 
//applying the following discount . Negative purchase amounts are invalid

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid Purchase Amount\n");
    }
    else if (fAmount < 1000)
    {
        fDiscount = 0;
    }
    else if (fAmount < 5000)
    {
        fDiscount = fAmount * 0.10;
    }
    else
    {
        fDiscount = fAmount *0.20;
    }

    fFinalAmount = fAmount - fDiscount;
    
    printf("Final Payable Amount: %.2f\n", fFinalAmount);
}
int main()
{
    float fAmount = 0.0f;

    printf("Enter Purchase Amount:\n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);
    
    return EXIT_SUCCESS;
}