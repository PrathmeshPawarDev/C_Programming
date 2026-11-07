#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountDiff
// Description   : It is used to return diffrence between summation of odd and even digits
// Input         : Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 8/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////


int CountDiff(int iNo)
{
    int iDigit = 0, iAns = 0;
    int iSumEven = 0,iSumOdd = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
        iNo = iNo/10;   
    }
    iAns = iSumEven - iSumOdd;

    return iAns;
    
}

int main()
{

    int iValue = 0,iRet = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}
///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//       Input                 Output
//-------------------------------------------------------------------------------------
//        2395                   -15
//
//        1018                    6
//
//        8440                    16
//
//        5733                   -18  
//
///////////////////////////////////////////////////////////////////////////////////////