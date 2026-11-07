
#include<stdio.h>
#include<stdlib.h>



//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountOdd
// Description   : It is used to count Odd Digits
// Input         : Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 7/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////


int CountOdd(int iNo)
{
    int iDigit = 0, iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;

}

int main()
{   

    int iValue = 0,iRet = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//       Input                 Output
//-------------------------------------------------------------------------------------
//        2395                    3
//
//        1018                    2
//
//       -1018                    2
//
//        8462                    0
//
///////////////////////////////////////////////////////////////////////////////////////