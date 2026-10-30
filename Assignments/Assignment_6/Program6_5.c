//accept employee's monthly salary and completed years of service. calculate the bonus using these rules
// more than 10 years of service earns a bonus of 15% of monthly salary;
//5 to 10 years earns 10% less than 5 years earns 5% .
//salary must be positive and years of service cannot be negative.

#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (fSalary <= 0 || iYears < 0)
    {
        printf("Invalid Input\n");
    }
    else if (iYears > 10)
    {
        fBonus = fSalary * 0.15;
        printf("Bonus Amount: %.2f\n", fBonus);
    }
    else if (iYears >= 5)
    {
        fBonus = fSalary * 0.10;
        printf("Bonus Amount: %.2f\n", fBonus);
    }
    else
    {
        fBonus = fSalary * 0.05;
        printf("Bonus Amount: %.2f\n", fBonus);
    }
}
int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter Salary and years of service :\n");
    scanf("%f %d",&fSalary, &iYears);

    CalculateBonus(fSalary, iYears);
    
    return EXIT_SUCCESS;
}
