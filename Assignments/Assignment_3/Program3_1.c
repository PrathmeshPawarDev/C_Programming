//write a program which accept one number from user print that number of even number

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : PrintEven
// Description   : It is used to display accept one number from user print that number of even number
// Input         : Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 20/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1;iCnt <= (iNo *2);iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }


}

int main()
{
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    PrintEven(iValue);


    return EXIT_SUCCESS;
}