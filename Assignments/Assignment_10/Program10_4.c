#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FhtoCs
// Description   : It is used to convert tempreture from fehrenheit to celcius 
// Input         : float
// Output        : double
// Author        : Prathmesh Sandipan Pawar
// Date          : 3/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    float Fehrenheit = 0.0f;

    Fehrenheit = (fTemp - 32) * 5 / 9;

    return Fehrenheit;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Tempreture in Fahrenheit :");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Tempreture in Celcius  :%lf",dRet);

    return EXIT_SUCCESS;
}


///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//      Input            Output
//-------------------------------------------------------------------------------------
//       10             -12.222222
//
//       34              1.111111
//
//
///////////////////////////////////////////////////////////////////////////////////////