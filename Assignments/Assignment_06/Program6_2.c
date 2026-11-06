#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : CheckAddmission
// Description   : It is used to calculate Electricity bill 
// Input         : Float,Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 28/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////
void CheckAddmission(int fMarks,int iAge)
{

    if(fMarks < 0 || iAge < 0)
    {
        printf("Invalid Input ..");
    }
    else
    {
        if(fMarks >= 60 && iAge >= 17)
       {
            printf("Eligible for Addmission ");
        }else
        {
            printf("Not Eligible for Addmission ");
        }
    }
    
}

int main()
{

    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter Marks ans Age :");
    scanf("%f%d",&fMarks,&iAge);

    CheckAddmission(fMarks , iAge);

    return EXIT_SUCCESS;
}