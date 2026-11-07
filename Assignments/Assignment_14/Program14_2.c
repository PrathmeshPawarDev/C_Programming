#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FactRev
// Description   : It is used Display Factors in reverse order  
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 8/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////


void  FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo/2) ;iCnt >=1 ;iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t ",iCnt);
        }
        
    }

    
}

int main()
{

    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    FactRev(iValue);


    return EXIT_SUCCESS;
}
///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//       Input                 Output
//-------------------------------------------------------------------------------------
//        12                    6        4       3       2       1
//
//        13                    1                    
//
//        10                    5        2       1
//
//        
///////////////////////////////////////////////////////////////////////////////////////