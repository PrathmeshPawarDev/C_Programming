#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : Display
// Description   : It is used to Display linear pattern
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 31/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////


void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("#\t");
    }
}

int main()
{

    int iValue = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//      Input                       Output
//-------------------------------------------------------------------------------------
//        4           *       *       *       *       #       #       #       #
//
//        2           *       *       #       #
//
//       -5           *       *       *       *       *       #       #       #       #       #
//
///////////////////////////////////////////////////////////////////////////////////////