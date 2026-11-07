#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MultFact
// Description   : It is used to return Multiplication of Factors of Number 
// Input         : Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 8/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////


int  MultFact(int iNo)
{
    int iCnt = 0,  iMulFact = 0;

    iMulFact = 1;
    for(iCnt = 1;iCnt <= (iNo/2);iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMulFact = iMulFact * iCnt;
        }
        
    }

    return iMulFact;

    
}

int main()
{

    int iValue = 0,iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet =MultFact(iValue);

    printf("Multiplication of Factors :%d",iRet);

    return EXIT_SUCCESS;
}
///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//       Input                 Output
//-------------------------------------------------------------------------------------
//        12                    Multiplication of Factors : 144
//
//        13                    Multiplication of Factors : 1                    
//
//        10                    Multiplication of Factors : 10
//
//        
///////////////////////////////////////////////////////////////////////////////////////