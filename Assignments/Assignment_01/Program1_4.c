//Question4. Accept one number and Check whether it is divisible by 5 or Not

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE  1
#define FALSE 0 


//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : Check
// Description   : It is used to check wheather a number is  Divisible 5 or not 
// Input         : Integer
// Output        : Boolean
// Author        : Prathmesh Sandipan Pawar
// Date          : 18/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
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

    printf("Enter a Number :\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("%d is Divisible by 5 ",iValue);
    }
    else
    {
         printf("%d is Not Divisible by 5 ",iValue);
    }

    return EXIT_SUCCESS;
}