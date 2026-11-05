#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigits
// Description   : It is used to Display single digit 
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 5/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{

    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo/10;

    }

}

int main()
{

    int iValue = 0;

    printf("Enter a Number :");
    scanf("%d",&iValue);

    DisplayDigits(iValue);


    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//       Input             Output
//-------------------------------------------------------------------------------------
//        1018               8             
//  
//                           1      
//
//                           0     
//
//                           1     
//
//       -1018               8             
//  
//                           1      
//
//                           0     
//
//                           1   
//
///////////////////////////////////////////////////////////////////////////////////////
