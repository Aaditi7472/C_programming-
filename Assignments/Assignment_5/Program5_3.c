//accept marks of students out of 100 and display the grade acccording to the following criteria ,marks outside 0 - 100 are invalid.
// 90-100 = A, 75 - 89= B, 60 - 74 = C, 40 - 59 = D, below 40 fail 

#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    if (fMarks >= 90 && fMarks <= 100) 
    {
        printf("Grade A\n");
    }
    else if (fMarks >= 75 && fMarks <= 89)
    {
        printf("Grade B\n");
    }
    else if (fMarks >= 60 && fMarks <= 74)
    {
        printf("Grade C\n");
    }
    else if (fMarks >= 40 && fMarks <= 59)
    {
        printf("Grade D\n");
    }
    else if (fMarks < 40)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Invalid Marks\n");
    }
}
int main()
{
    float fMarks = 0.0f;   

    printf("Enter Marks :\n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}