#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : Table
// Description   : It is used to Display Table of n number
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 31/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= 10 ; iCnt++)
    {
       printf(" %d\t",iNo*iCnt);
    }
    

}
int main()
{
    int iValue = 0;
    printf("Enter a number :");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}