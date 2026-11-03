#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeSumEven
// Description   : It is used to Calculate sum of Even numbers between range 
// Input         : Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 4/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart,int iEnd)
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
             if ((iCnt % 2) == 0)
            {
                iSum = iSum + iCnt;   
            }
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

    iRet = RangeSumEven(iValue1,iValue2);

    printf("Sum is %d \n ",iRet);



    return EXIT_SUCCESS;
}


///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//      Input1        Input2       Output
//-------------------------------------------------------------------------------------
//       23             30         108
//  
//       10             18         70
//
//       -10             2         Invalid choice
//
//        9             15         Invalid choice
//
///////////////////////////////////////////////////////////////////////////////////////