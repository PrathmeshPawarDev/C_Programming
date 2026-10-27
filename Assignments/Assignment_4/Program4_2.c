#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : CheckEvenOdd
// Description   : It is used to check the given number is Even or Odd
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 27/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////


void CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("Number is Even \n");
    }
   else
    {
         printf("Number is Odd \n");
    }

}

int main()
{
    int iValue = 0;
    printf("Enter a number :");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);


    return EXIT_SUCCESS;
}