//Accept two numbers from user and display first number in second number of times

#include <stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : Display
// Description   : It is used to display first number in second number of times
// Input         : Integer,Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 19/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo,int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iFrequency;iCnt ++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{

    int iValue = 0;
    int iCount = 0;

    printf("Enter a Number  :\n");
    scanf("%d",&iValue);

    printf("Enter Frequnecy  :\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);


    return EXIT_SUCCESS;
}