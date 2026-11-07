#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : MultDigits
// Description   : It is used to do multiplication of digits
// Input         : Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 8/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////


int MultDigits(int iNo)
{
    int iDigit = 0,iMul = 0;

    iMul = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMul = iMul * iDigit;
        }
        iNo = iNo/10;   
    }

    return iMul;
    
}

int main()
{

    int iValue = 0,iRet = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication od Digits :%d",iRet);

    return EXIT_SUCCESS;
}
///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//       Input                 Output
//-------------------------------------------------------------------------------------
//        2395                   270
//
//        1018                    8
//
//        9440                   144
//
//        922432                 864  
//
///////////////////////////////////////////////////////////////////////////////////////