#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : OddFactorial
// Description   : It is used to Find Odd factorial of Number
// Input         : Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 31/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0, iFact = 0;

    iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//      Input            Output
//-------------------------------------------------------------------------------------
//        5                 15
//
//        -5                15
//
//        10                945
//
///////////////////////////////////////////////////////////////////////////////////////