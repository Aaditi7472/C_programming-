// student is eligible for admission id students marks are atleast 60 and 
//age is at least 17 years . // accept both values and determine elgibility 
//negative age and marks outside 100 treated as invalid input.

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    float fBill = 0.0f;

    if (fMarks >= 60 && iAge >= 17)
    {
       printf("Elgible for Admission\n");
    }
    else if (fMarks <= 60 && iAge <= 17)
    {
        printf("Not Eligible\n");
    }
    else
    {
        printf("Invalid Input \n");
    }
    
    
}
int main()
{
    float fMarks = 0.0f;
    int iAge = 0;  

    printf("Enter Marks and Age :\n");
    scanf("%f %d",&fMarks ,&iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}