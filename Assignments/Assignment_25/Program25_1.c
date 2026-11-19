#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   ChkAlpha
// Description      :   check wheather the give character is Alphabet or Not
// Input            :   Character 
// Output           :   Boolean
// Author           :   Prathmesh Sandipan Pawar
// Date             :   19/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkAlpha(char cValue)
{
    BOOL bAns = FALSE;

    if( (cValue >= 'A' && cValue <= 'Z') || (cValue >= 'a' && cValue <= 'z'))
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

     
    fRet = ChkAlpha(cValue);

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
//        f                                True
//
////////////////////////////////////////////////////////////////////////////////////////////////////////