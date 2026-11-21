#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   ChkSmall
// Description      :   check wheather the give character is Small or not
// Input            :   Character 
// Output           :   Boolean
// Author           :   Prathmesh Sandipan Pawar
// Date             :   21/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkSmall(char cValue)
{
    BOOL bAns = FALSE;

    if( (cValue >= 'a' && cValue <= 'z') )
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

     
    fRet = ChkSmall(cValue);

    if(fRet == TRUE)
    {
        printf("Character is Small");
    }else
    {
        printf("Character is not Small");
    }


    return EXIT_SUCCESS;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//                  Test
//--------------------------------------------------------------------------------------------------
//      Input 1                            Output
//--------------------------------------------------------------------------------------------------
// 
//        a                                True
//
//        #                                False
//
//        D                                False
//
////////////////////////////////////////////////////////////////////////////////////////////////////////