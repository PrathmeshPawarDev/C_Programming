#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : NonFact
// Description   : It is used Display Non Factors of number  
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 8/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////


void  NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo ;iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t ",iCnt);
        }
        
    }

    
}

int main()
{

    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    NonFact(iValue);


    return EXIT_SUCCESS;
}
///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//       Input                 Output
//-------------------------------------------------------------------------------------
//        12                   5        7       8       9       10      11
//
//        13                   2        3       4       5       6       7       8       9       10      11      12
//
//        10                   3        4       6       7       8       9
//
//        
///////////////////////////////////////////////////////////////////////////////////////