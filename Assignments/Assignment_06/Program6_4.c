#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : CheckTriangle
// Description   : It is used to check the three number can form valid triangle 
// Input         : Integer,Integer,Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 28/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////


void CheckTriangle(int iSide1,int iSide2,int iSide3)
{

    if(iSide1 <= 0 || iSide2 <= 0 || iSide3 <= 0)
    {
        printf("Please enter positive Numbers ");
    }
    else
    {
        if(  ((iSide1+iSide2) > iSide3) && ((iSide1+iSide3) > iSide2) && ((iSide2+iSide3) > iSide1) )  
        {
            printf("Valid Triangle ..");
        }
        else
        {
            printf("InValid Triangle ..");
        }

    }

}

int main()
{
    int iSide1 = 0,iSide2 = 0, iSide3 = 0;

    printf("Enter three sides :");
    scanf("%d%d%d",&iSide1,&iSide2,&iSide3);

    CheckTriangle(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;
}