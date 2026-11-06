#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name :  CheckDivisiblity
// Description   : It is used to check the given number is Divisible by 5 or not
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 27/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////


void CheckDivisiblity(int iNo)
{
    if((iNo % 5) == 0)
    {
        printf("Number is Divisible by 5 \n");
    }
   else
    {
         printf("Number is not Divisible by 5 \n");
    }

}

int main()
{
    int iValue = 0;
    printf("Enter a number :");
    scanf("%d",&iValue);

     CheckDivisiblity(iValue);


    return EXIT_SUCCESS;
}