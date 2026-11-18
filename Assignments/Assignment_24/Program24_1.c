
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   chkChar
// Description      :   check the character is present in string  or not 
// Input            :   Character Pointer ,Character 
// Output           :   boolean
// Author           :   Prathmesh Sandipan Pawar
// Date             :   18/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////

BOOL chkChar(char *str,char ch)
{
    BOOL bAns = FALSE;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bAns = TRUE;
        }
        str++;
    }
    return bAns;
}

int main()
{

    char Arr[20] ;
    char cValue ;
    BOOL bRet = FALSE ;


    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character :\n");
    scanf(" %c",&cValue);


    bRet = chkChar(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("True ");
    }
    else
    {
        printf("False ");
    }
    

    return EXIT_SUCCESS;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//                  Test
//--------------------------------------------------------------------------------------------------
//      Input 1                      Input 2                            Output 
//--------------------------------------------------------------------------------------------------
//     Marvellous Multi OS             e                                 True
//
//     Marvellous Multi OS             w                                 False
//
////////////////////////////////////////////////////////////////////////////////////////////////////////