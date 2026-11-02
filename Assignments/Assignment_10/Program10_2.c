#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : RectArea
// Description   : It is used to calculate  Area of Rectangle 
// Input         : float
// Output        : double
// Author        : Prathmesh Sandipan Pawar
// Date          : 2/11/2026
//
//////////////////////////////////////////////////////////////////////////////////////
double RectArea(float fWidth,float fHeight)
{

    float  fArea = 0.0f;

    fArea = fWidth * fHeight;

    return fArea;


}

int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width  :");
    scanf("%f",&fValue1);

    printf("Enter height  :");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of circle is  :%lf",dRet);

    return EXIT_SUCCESS;
}


///////////////////////////////////////////////////////////////////////////////////////
//                  Test Cases
//-------------------------------------------------------------------------------------
//      Input1        Input2        Output
//-------------------------------------------------------------------------------------
//        5.3           9.78         51.834000
//
//
///////////////////////////////////////////////////////////////////////////////////////