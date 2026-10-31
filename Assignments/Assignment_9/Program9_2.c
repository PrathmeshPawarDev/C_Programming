#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : Display
// Description   : It is used to Convert Dollar to Indian Rupees
// Input         : Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 31/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////


int DollarToINR(int iNo)
{
    
    int iRuppess = 0;
    iRuppess = iNo * 70;

    return iRuppess;
}
int main()
{

    int iValue = 0,iRet = 0;

    printf("Enter How Many Dollars $ :");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//      Input             Output
//-------------------------------------------------------------------------------------
//        10             700
//
//        3              210
//
//        1200           84000  
//
///////////////////////////////////////////////////////////////////////////////////////