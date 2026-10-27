
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : CheckLeapYear
// Description   : It is used to check the given year is leap year or not
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 27/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////


void CheckLeapYear(int iYear)
{
    if((iYear % 400 == 0) || (iYear % 4 == 0 && iYear % 100 != 0))
    {
        printf("%d is Leap Year \n",iYear);
    }
    else
    {
         printf("%d is Not leap Year \n",iYear);
    }
}

int main()
{
    int iYear = 0;
    printf("Enter Year :");
    scanf("%d",&iYear);


    CheckLeapYear(iYear);


    return EXIT_SUCCESS;
}