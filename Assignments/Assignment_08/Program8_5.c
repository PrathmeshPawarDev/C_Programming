#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : TableRev
// Description   : It is used to Display Table of n number in reverse
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 31/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10 ; iCnt >= 1 ; iCnt--)
    {
       printf(" %d\t",iNo*iCnt);
    }
    

}
int main()
{
    int iValue = 0;
    printf("Enter a number :");
    scanf("%d",&iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}