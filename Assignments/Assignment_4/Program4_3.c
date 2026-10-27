#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : FindGreater
// Description   : It is used to check the greater number between two number
// Input         : Integer,Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 27/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////


void FindGreater(int iFirst,int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d  is Greater \n",iFirst);
    }
   else if(iSecond > iFirst)
    {
         printf("%d  is Greater \n",iSecond);
    }else
    {
        printf("Both are is Equal \n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter 1st number :");
    scanf("%d",&iValue1);

    printf("Enter 2nd number :");
    scanf("%d",&iValue2);

    FindGreater(iValue1,iValue2);


    return EXIT_SUCCESS;
}