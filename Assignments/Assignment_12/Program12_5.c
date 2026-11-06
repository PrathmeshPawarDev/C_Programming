#include<stdio.h>
#include<stdlib.h>



//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Count
// Description   : It is used to count number less than 6 
// Input         : Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 7/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////


int Count(int iNo)
{
    int iDigit = 0, iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = Count(iValue);

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
//        1018                    3
//
//        9440                    3
//
//        96672                   1
//
///////////////////////////////////////////////////////////////////////////////////////