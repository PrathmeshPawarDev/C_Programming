#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : Display
// Description   : It is used to Display numbers line upto n
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 30/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    
    for(iCnt = -iNo;iCnt <= iNo;iCnt++)
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