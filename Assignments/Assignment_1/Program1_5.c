//Question5. Accept one number from user and print that number of (*) on screen

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : Accept
// Description   : It is used to display specific numbers of * 
// Input         : Integer
// Output        : Display stars (*)
// Author        : Prathmesh Sandipan Pawar
// Date          : 18/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1;iCnt <= iNo ; iCnt++)
    {
        printf("*");
    }
}

int main()
{

    int iValue = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);

    Accept(iValue);

    return EXIT_SUCCESS;
}