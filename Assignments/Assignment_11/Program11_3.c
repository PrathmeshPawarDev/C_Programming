#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeSum
// Description   : It is used to Calculate sum of number between range 
// Input         : Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 4/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart,int iEnd)
{
    int iCnt = 0 , iSum = 0;

    if(iStart > iEnd || iStart < 0)
    {
        printf("InValid choice... \n");
    }
    else
    {
        for(iCnt = iStart ;iCnt <= iEnd ; iCnt++)
        {
            iSum = iSum + iCnt;   
        }
    }

    
    return iSum;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0, iRet = 0;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter End point :");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Sum is %d \n ",iRet);



    return EXIT_SUCCESS;
}


///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//      Input1        Input2       Output
//-------------------------------------------------------------------------------------
//       23             30         212
//  
//       10             18         126
//
//       -10             2         Invalid choice
//
//        9             15         Invalid choice
//
///////////////////////////////////////////////////////////////////////////////////////