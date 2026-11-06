#include<stdio.h>
#include<stdlib.h>



//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : CountTwo
// Description   : It is used to count frequency of 2 in Digit 
// Input         : Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 7/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////


int CountTwo(int iNo)
{
    int iDigit = 0, iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("Frequency of 2 :%d",iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//       Input                 Output
//-------------------------------------------------------------------------------------
//        1018              Frequency of 2 :0
//
//        1272              Frequency of 2 :2
//
//        -2122             Frequency of 2 :3
//
///////////////////////////////////////////////////////////////////////////////////////