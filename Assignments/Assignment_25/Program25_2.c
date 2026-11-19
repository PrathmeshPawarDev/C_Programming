#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   ChkCapital
// Description      :   check wheather the give character is Capital or not
// Input            :   Character 
// Output           :   Boolean
// Author           :   Prathmesh Sandipan Pawar
// Date             :   19/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkCapital(char cValue)
{
    BOOL bAns = FALSE;

    if( (cValue >= 'A' && cValue <= 'Z') )
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

     
    fRet = ChkCapital(cValue);

    if(fRet == TRUE)
    {
        printf("True");
    }else
    {
        printf("False");
    }


    return EXIT_SUCCESS;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//                  Test
//--------------------------------------------------------------------------------------------------
//      Input 1                            Output
//--------------------------------------------------------------------------------------------------
// 
//        F                                True
//
//        #                                False
//
//        f                                False
//
////////////////////////////////////////////////////////////////////////////////////////////////////////