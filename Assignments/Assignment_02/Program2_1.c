//Question. Accept one number from user and print that number of star on screen 

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : Display
// Description   : It is used to display no of * 
// Input         : Integer
// Output        : no of *
// Author        : Prathmesh Sandipan Pawar
// Date          : 19/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0) //Updater
    {
        iNo = -iNo;
    }

    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
    
}

int main()
{
    int iValue = 0;

    printf("enter a number :");
    scanf("%d",&iValue);

    Display(iValue);


    return EXIT_SUCCESS;
}