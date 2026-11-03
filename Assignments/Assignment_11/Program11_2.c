#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayEven
// Description   : It is used to Display Even numbers between range 
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 4/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("InValid choice... ");
    }

    
    for(iCnt = iStart ;iCnt <= iEnd ; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter End point :");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);



    return EXIT_SUCCESS;
}


///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//      Input1        Input2       Output
//-------------------------------------------------------------------------------------
//       23             35         24      26      28      30      32      34    
//  
//       10             10         10
//
//       -4             2          -4      -2       0       2
//
//        9             15          Invalid choice
//
///////////////////////////////////////////////////////////////////////////////////////