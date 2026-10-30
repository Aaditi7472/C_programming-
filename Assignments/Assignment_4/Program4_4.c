//accept age of person and determine whether the person is eligible to vote. A person must be atleast 18 years to vote.
//negative age should be invalid.

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if (iAge > 18)
    {
        printf("Eligible for Voting\n");
    }
    else if (iAge < 0)
    {
         printf("Invalid age\n");
    }
    else
    {
         printf("Not Eligible for Voting\n");
    }
}
int main()
{
    int iAge = 0;    

    printf("Enter your age :\n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}