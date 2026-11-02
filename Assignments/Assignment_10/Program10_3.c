#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : KMtoMeter
// Description   : It is used to convert  Kilometer to Meter   
// Input         : Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 2/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////
int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}
int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter KiloMeter :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d KiloMeter means %d Meter",iValue,iRet);


    return EXIT_SUCCESS;
}


///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//      Input1        Output
//-------------------------------------------------------------------------------------
//        5            5000
//
//       12            12000
//
///////////////////////////////////////////////////////////////////////////////////////