#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountRange
// Description   : It is used to count range of digit between 3 and 7
// Input         : Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 8/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////


int CountRange(int iNo)
{
    int iDigit = 0,iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
        {
            iCount++;
        }
        iNo = iNo/10;   
    }

    return iCount;
    
}

int main()
{

    int iValue = 0,iRet = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}
///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//       Input                 Output
//-------------------------------------------------------------------------------------
//        2395                    1
//
//        1018                    0
//
//        4521                    2
//
//        9922                    0
//
///////////////////////////////////////////////////////////////////////////////////////