#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : MultipleDisplay
// Description   : It is used to Display first 5 multiples of  n number
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 30/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

     if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;iCnt <= 5;iCnt++)
    {
       
            printf("%d\t",iNo*iCnt);
        
    }
}

int main()
{

    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);


    return EXIT_SUCCESS;
}