#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FactDiff
// Description   : It is used return Summation diffrence between factors ans  Non Factors of number  
// Input         : Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 8/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////


int   FactDiff(int iNo)
{
    int iCnt = 0,iAns = 0;
    int iSumNonFact = 0, iSumFact = 0;

    for(iCnt = 1;iCnt < iNo ;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;  
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
        
    }
    iAns = iSumFact - iSumNonFact;

    return iAns;
    
}

int main()
{

    int iValue = 0,iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}
///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//       Input                 Output
//-------------------------------------------------------------------------------------
//        12                   -34
//
//        13                   -76
//
//        10                   -29              
//
//        
///////////////////////////////////////////////////////////////////////////////////////