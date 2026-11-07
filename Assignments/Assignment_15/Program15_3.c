#include<stdio.h>
#include<stdlib.h>

#define TRUE  1
#define FALSE 0

typedef int BOOL;


//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkEqual
// Description   : It is used to check the given two numbers are equal or not  
// Input         : Integer
// Output        : Boolean
// Author        : Prathmesh Sandipan Pawar
// Date          : 8/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////


BOOL ChkEqual(int iNo1,int iNo2)
{
    BOOL bResult = FALSE;

    if(iNo1 == iNo2)
    {
        bResult = TRUE;
    }

    return bResult ;

}


int main()
{

    int iValue1 = 0,iValue2 = 0 ;
    BOOL bRet = FALSE;

    printf("Enter 2  Numbers :");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == TRUE )
    {
        printf("Is Equal.. ");
    }
    else
    {
        printf("Is Not Equal..  ");
    }



    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//       Input1                 Input2                 Output
//-------------------------------------------------------------------------------------
//        12                      12                  Is Equal
//
//        13                      10                  Is Not Equal
//
//        10                     -10                  Is Not Equal
//
//        
///////////////////////////////////////////////////////////////////////////////////////