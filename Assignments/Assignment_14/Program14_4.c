#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SumNonFact
// Description   : It is used return Summation of all Non Factors of number  
// Input         : Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 8/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////


int   SumNonFact(int iNo)
{
    int iCnt = 0,iSumNonFact = 0;

    for(iCnt = 1;iCnt <= iNo ;iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
        
    }

    return iSumNonFact;
    
}

int main()
{

    int iValue = 0,iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}
///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//       Input                 Output
//-------------------------------------------------------------------------------------
//        12                   50
//
//        13                   77
//
//        10                   37              
//
//        
///////////////////////////////////////////////////////////////////////////////////////