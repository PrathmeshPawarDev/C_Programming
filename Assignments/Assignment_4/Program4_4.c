#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : CheckVotingEligiblity
// Description   : It is used to check the user is eligible for voting or not
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 27/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////


void CheckVotingEligiblity(int iAge)
{
    if(iAge >= 18 )
    {
        printf("you are eligible for voting\n");
    }
    else
    {
         printf("you are not eligible for voting\n");
    }

}

int main()
{
    int iAge = 0;
    printf("Enter your Age  :");
    scanf("%d",&iAge);

    CheckVotingEligiblity(iAge);


    return EXIT_SUCCESS;
}