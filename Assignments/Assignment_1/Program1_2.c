//Question2. Print Five Times Marvellous On Screen
#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : Display
// Description   : It is used to Display Marvellous 5 times on Console
// Input         : Nothing
// Output        : 5 time Marvellous on Console
// Author        : Prathmesh Sandipan Pawar
// Date          : 18/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= 5; iCnt++)
    {
        printf("Marvellous \n");
    }
}

int main()
{

    Display();

    return EXIT_SUCCESS;
}