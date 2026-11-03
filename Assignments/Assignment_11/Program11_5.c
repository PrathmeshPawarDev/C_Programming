#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayRev
// Description   : It is used to Display number between range in reverse  
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 4/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("InValid choice... ");
    }

    for(iCnt = iEnd ;iCnt >= iStart ; iCnt--)
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

    RangeDisplayRev(iValue1,iValue2);



    return EXIT_SUCCESS;
}


///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//      Input1        Input2       Output
//-------------------------------------------------------------------------------------
//       23             35         35      34      33      32      31      30       29
//                                 28      27      26      25      24      23
//  
//       10             10         10
//
//       -4             2          2       1       0       -1      -2      -3      -4
//
//        9             15          Invalid choice
//
///////////////////////////////////////////////////////////////////////////////////////