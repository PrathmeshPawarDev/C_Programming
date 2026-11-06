#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : DisplayGrade
// Description   : It is used to Diplay grade
// Input         : Float
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 27/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void DisplayGrade(float fMarks)
{

    if(fMarks <= 100 && fMarks >= 90 )
    {
        printf("Grade A \n");
    }
    else if(fMarks < 90 && fMarks >= 75 )
    {
        printf("Grade B \n");
    }
    else if(fMarks < 75 && fMarks >= 60 )
    {
        printf("Grade C \n");
    }
    else if(fMarks < 60 && fMarks >= 40 )
    {
        printf("Grade D \n");
    }
    else if(fMarks < 40 && fMarks >=0  )
    {
        printf("Fail \n");
    }else
    {
        printf("Invalid Marks");
    }

}
int main()
{
    float fMarks = 0.0f;

    printf("Enter Your Marks :");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}