#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : CheckNumber
// Description   : It is used to check the given number is positive ,negative or zero
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 27/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////


void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("Number is Positive \n");
    }
    else if(iNo < 0)
    {
         printf("Number is Negative  \n");
    }else
    {
         printf("Number is Zero \n");
    }

}

int main()
{
    int iValue = 0;
    printf("Enter a number :");
    scanf("%d",&iValue);

    CheckNumber(iValue);


    return EXIT_SUCCESS;
}