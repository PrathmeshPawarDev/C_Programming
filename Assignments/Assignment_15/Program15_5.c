#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Percentage
// Description   : It is used to return Percentage   
// Input         : Integer,Integer
// Output        : Float
// Author        : Prathmesh Sandipan Pawar
// Date          : 8/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////


float Percentage(int iNo1,int iNo2)
{
    float fPer = 0.0f;
    
    fPer = ( (float) iNo2 / (float) iNo1 ) * 100;

   
    return fPer;

}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter Total Marks :");
    scanf("%d",&iValue1);

    printf("Enter Obtain Marks :");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("%.1f %%",fRet);


    return EXIT_SUCCESS;
}
///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//       Input1                 Input2                 Output
//-------------------------------------------------------------------------------------
//        1000                    745                  74.5 %
//
//        500                     330                  66.0 %
//
///////////////////////////////////////////////////////////////////////////////////////