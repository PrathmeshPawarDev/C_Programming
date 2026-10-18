//Question. Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo"

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : Display
// Description   : It is used to display  if number is less than 10 
//                 then print "Hello" otherwise print "Demo"
// Input         : Integer
// Output        : Hello or Demo
// Author        : Prathmesh Sandipan Pawar
// Date          : 19/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{

    int iValue = 0;

    printf("enter a number :");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}