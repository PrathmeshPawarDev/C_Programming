#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : Number
// Description   : It is used to Display if no is less than print 50 the small, if no is greater than 50 and less than 100 print  the medium ,and if no is greater than 100 print the large 
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 31/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo <= 50)
    {
        printf("Small ");
    }
    else if(iNo >50 && iNo <= 100)
    {
        printf("Medium ");
    }
    else
    {
        printf("Large ");
    }

}

int main()
{
    int iValue = 0;
    printf("Enter a number :");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}