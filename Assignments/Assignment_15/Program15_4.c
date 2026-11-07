#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Multiply
// Description   : It is used to return Multiplication of three numbers  
// Input         : Integer,Integer,Integer
// Output        : Integer
// Author        : Prathmesh Sandipan Pawar
// Date          : 8/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iMult = 0;

    if((iNo1+iNo2+iNo3) == 0)
    {
        iMult = 0;
    }
    else
    {
        if(iNo1 == 0)
        {
            iNo1 = 1;
        }
        if(iNo2 == 0)
        {
            iNo2 = 1;
        }
        if(iNo3 == 0)
        {
            iNo3 = 1;
        }


        iMult =iNo1 * iNo2 * iNo3;

    }

     

    return iMult;

}

int main()
{

    int iValue1 = 0,iValue2 = 0,iValue3 = 0;
    int iRet = 0;

    printf("Enter 3 Numbers :");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("%d",iRet);




    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//---------------------------------------------------------------------------------------------------------------
//       Input1                 Input2                   Input3                    Output
//---------------------------------------------------------------------------------------------------------------
//        5                       4                         7                        140
//
//        5                       0                         7                         35
//
//        5                       0                         0                         5 
//
//        0                       0                         0                         0        
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////