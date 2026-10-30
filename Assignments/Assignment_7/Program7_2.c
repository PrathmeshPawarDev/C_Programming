#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : Display
// Description   : It is used to Display numbers upto n
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 30/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{

    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);


    return EXIT_SUCCESS;
}