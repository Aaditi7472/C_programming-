//accept the number of electricity units consumed and calculate the total
//bill usinh the following slab wise rates. each slab rate applies only to
//units within that slab

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits <= 100)
    {
        fBill = iUnits * 5;
    }
    else if (iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
    }

    printf("Total Electricity Bill: %.2f\n", fBill);
    
}
int main()
{
    int iUnits = 0;   

    printf("Enter Consumed Units :\n");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}