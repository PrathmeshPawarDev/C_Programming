#include<stdio.h>
#include<stdlib.h>

#define PI 3.14

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CircleArea
// Description   : It is used to calculate Area of Circle
// Input         : float
// Output        : double
// Author        : Prathmesh Sandipan Pawar
// Date          : 2/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    float fArea = 0.0f;

    fArea = PI * fRadius * fRadius;

    return fArea;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Number :");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is  :%lf",dRet);

    return EXIT_SUCCESS;
}


///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//      Input            Output
//-------------------------------------------------------------------------------------
//        5.3            88.202606
//
//        10.4           339.622375
//
//        5              78.500000
//
///////////////////////////////////////////////////////////////////////////////////////