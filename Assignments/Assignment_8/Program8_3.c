#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : Factorial
// Description   : It is used to Display Factorial of n number
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 31/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void Factorial(int iNo)
{
    int iCnt = 0,iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    printf("Factorial of %d is %d",iNo,iFact);

}
int main()
{
    int iValue = 0;
    printf("Enter a number :");
    scanf("%d",&iValue);

    Factorial(iValue);

    return EXIT_SUCCESS;
}