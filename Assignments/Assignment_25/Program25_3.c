#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   ChkDigit
// Description      :   check wheather the give character is Digit or not
// Input            :   Character 
// Output           :   Boolean
// Author           :   Prathmesh Sandipan Pawar
// Date             :   20/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkDigit(char cValue)
{
    BOOL bAns = FALSE;

    if( (cValue >= '0' && cValue <= '9') )
    {
        bAns = TRUE;
    }

    return bAns;
}

int main()
{
    char cValue = '\0';
    BOOL fRet = FALSE;

    printf("Enter character ");
    scanf("%c",&cValue);

     
    fRet = ChkDigit(cValue);

    if(fRet == TRUE)
    {
        printf("Character is Digit");
    }else
    {
        printf("Character is not Digit");
    }


    return EXIT_SUCCESS;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//                  Test
//--------------------------------------------------------------------------------------------------
//      Input 1                            Output
//--------------------------------------------------------------------------------------------------
// 
//        4                                True
//
//        #                                False
//
//        f                                False
//
////////////////////////////////////////////////////////////////////////////////////////////////////////