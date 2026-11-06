#include<stdio.h>
#include<stdlib.h>



//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountFour
// Description   : It is used to count frequency of 4 in Digit 
// Input         : Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 7/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////


int CountFour(int iNo)
{
    int iDigit = 0, iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
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

    iRet = CountFour(iValue);

    printf("Frequency of 4 :%d",iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//       Input                 Output
//-------------------------------------------------------------------------------------
//        2395              Frequency of 4 :0
//
//        1424              Frequency of 4 :2
//
//        1444             Frequency of 4 :3
//
///////////////////////////////////////////////////////////////////////////////////////