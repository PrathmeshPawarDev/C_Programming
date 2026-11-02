#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SquareMeter
// Description   : It is used to convert Square feet into Square Meter  
// Input         : Integer
// Output        : double
// Author        : Prathmesh Sandipan Pawar
// Date          : 3/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    float fSquareFeet = 0.0f;

    fSquareFeet = (float) iValue * 0.0929;

    return fSquareFeet;
}
int main()
{
    int iValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Area in Square Feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%d SquareFeet means %lf SquareMeter",iValue,dRet);

    return EXIT_SUCCESS;
}


///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//      Input            Output
//-------------------------------------------------------------------------------------
//       5               0.464500
//
//       7               0.650300
//
//
///////////////////////////////////////////////////////////////////////////////////////