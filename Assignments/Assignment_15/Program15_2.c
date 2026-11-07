#include<stdio.h>
#include<stdlib.h>

#define TRUE  1
#define FALSE 0

typedef int BOOL;


//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkGreater
// Description   : It is used to check the number is greater than 100 or not  
// Input         : Integer
// Output        : Boolean
// Author        : Prathmesh Sandipan Pawar
// Date          : 8/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////


BOOL ChkGreater(int iNo)
{
    BOOL bResult = FALSE;

    if(iNo > 100)
    {
        bResult = TRUE;
    }

    return bResult ;

}


int main()
{

    int iValue = 0 ;
    BOOL bRet = FALSE;

    printf("Enter a Number :");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE )
    {
        printf("Greater ");
    }
    else
    {
        printf("Smaller  ");
    }



    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//       Input                 Output
//-------------------------------------------------------------------------------------
//        101                   Greater 
//
//        13                    Smaller
//
//        100                   Smaller
//
//        
///////////////////////////////////////////////////////////////////////////////////////