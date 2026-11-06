#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigits
// Description   : It is used to Display the 0 is present in digit or not 
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 6/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{

    int iDigit = 0, iFlag = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            printf("It contais zero");
            iFlag = 1;
            break;
        }
        iNo = iNo/10;

    }

    if(iFlag == 0)
    {
        printf(" There is no zero");
    }

}

int main()
{

    int iValue = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);

    DisplayDigits(iValue);


    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//       Input                 Output
//-------------------------------------------------------------------------------------
//        1018              it Contain zero
//
//        1982              there is no zero 
//
//        1000              it Contain zero
//
//        -6754             there is no zero 
//
///////////////////////////////////////////////////////////////////////////////////////