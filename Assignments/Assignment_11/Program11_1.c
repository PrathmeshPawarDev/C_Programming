#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplay
// Description   : It is used to Display number between range 
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 4/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart,int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("InValid choice... ");
    }

    for(iCnt = iStart ;iCnt <= iEnd ; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter End point :");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);



    return EXIT_SUCCESS;
}


///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//      Input1        Input2       Output
//-------------------------------------------------------------------------------------
//       23             35         23      24      25      26      27      28      29
//                                 30      31      32      33      34      35
//  
//       10             10         10
//
//       -4             2          -4      -3      -2      -1      0       1       2
//
//        9             15          Invalid choice
//
///////////////////////////////////////////////////////////////////////////////////////