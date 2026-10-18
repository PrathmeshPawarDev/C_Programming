//Question3. Program to print 5 to 1 Numbers on Screen

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : Display
// Description   : It is used to Display 5 to 1 Numbers on Console
// Input         : Nothing
// Output        : 5 to 1 Numbers
// Author        : Prathmesh Sandipan Pawar
// Date          : 18/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;
 
    iCnt = 5;
    while(iCnt > 0)
    {
        printf("%d\n",iCnt);
        
        iCnt--;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}