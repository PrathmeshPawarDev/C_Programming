//Question. Accept one number from user and check wheather a number is even or odd

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : ChkEven
// Description   : It is used to check the given number is even or odd
// Input         : Integer
// Output        : Boolean
// Author        : Prathmesh Sandipan Pawar
// Date          : 19/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number \n");
    scanf("%d",&iValue);

    bRet =  ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Number is Even \n");
    }
    else
    {
       printf("Number is Odd \n"); 
    }

    return EXIT_SUCCESS;
}