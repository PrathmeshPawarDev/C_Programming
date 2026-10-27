#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : CalculateDiscount
// Description   : It is used to calculate the discount  
// Input         : Float
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 28/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f, fFinalAmount = 0.0f;

    if(fAmount <= 1000)
    {
        printf("PayAble Amount : %.2f /-",fAmount);
    }
    else if(fAmount > 1000 && fAmount <= 5000)
    {
        fDiscount = (fAmount * 10 )/100;
        fFinalAmount = fAmount - fDiscount;
        printf("PayAble Amount : %.2f /-",fFinalAmount);
    }else if(fAmount > 5000)
    {
        fDiscount = (fAmount * 20 )/100;
        fFinalAmount = fAmount - fDiscount;
        printf("PayAble Amount : %.2f /-",fFinalAmount);
    }

}

int main()
{

    float fAmount = 0.0f;

    printf("Enter purchase amount : ");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}