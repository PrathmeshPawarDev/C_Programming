
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : FindGreater
// Description   : It is used to check the greater number between three number
// Input         : Integer,Integer,Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 27/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////


void FindGreater(int iFirst,int iSecond,int iThird)
{
    if(iFirst > iSecond && iFirst > iThird)
    {
        printf("%d  is Greater \n",iFirst);
    }
   else if(iSecond > iFirst && iSecond > iThird)
    {
         printf("%d  is Greater \n",iSecond);
    }else
    {
         printf("%d  is Greater \n",iThird);
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    printf("Enter 1st number :");
    scanf("%d",&iValue1);

    printf("Enter 2nd number :");
    scanf("%d",&iValue2);

    printf("Enter 3rd number :");
    scanf("%d",&iValue3);

    FindGreater(iValue1,iValue2,iValue3);


    return EXIT_SUCCESS;
}