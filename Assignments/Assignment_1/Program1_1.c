// Question1. Program to divide to numbers
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : Divide
// Description   : It is used to Perform Division of two Numbers
// Input         : Integer,Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 18/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

int Divide(int iNo1 , int iNo2)
{
    int iAns = 0;
    
    if(iNo2 > iNo1)
    {
        return EXIT_FAILURE;
    }

    iAns = iNo1/iNo2;

    return iAns;
}

int main()
{

    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet =  Divide(iValue1,iValue2);

    printf("Division is :%d\n",iRet);
    

    return EXIT_SUCCESS;
}