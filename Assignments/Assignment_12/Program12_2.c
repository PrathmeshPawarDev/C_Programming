#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

typedef int BOOL;
//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkZero
// Description   : It is used to Display the 0 is present in digit or not 
// Input         : Integer
// Output        : Boolean
// Author        : Prathmesh Sandipan Pawar
// Date          : 6/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{

    int iDigit = 0;
    BOOL bFlag = False;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bFlag = True;
            break;
        }
        iNo = iNo/10;

    }

    return bFlag;

}

int main()
{

    int iValue = 0;
    BOOL bRet = False;

    printf("Enter a Number :");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == True)
    {
        printf("It contains zero ");
    }
    else
    {
        printf("There is no zero ");
    }

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
//         0001             there is no zero 
//
///////////////////////////////////////////////////////////////////////////////////////