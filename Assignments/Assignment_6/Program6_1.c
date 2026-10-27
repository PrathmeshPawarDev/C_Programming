#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : CalculateElectricityBill
// Description   : It is used to calculate Electricity bill 
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 28/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////
void CalculateElectricityBill(int iUnit)
{
    float fBill  = 0.0f, fTemp = 0.0f;
    int iTemp = 0;

    if(iUnit <= 100)
    {
        fBill = (float) iUnit * 5;
        printf("Bill :%.2f\n",fBill);

    }else if(iUnit <= 200 && iUnit > 100)
    {
        iTemp = iUnit - 100;

        fBill = (float) iTemp * 7;

        fTemp = fBill + (100*5);

        printf("Bill :%.2f\n",fTemp);
    }
    else if(iUnit > 200)
    {
        iTemp = iUnit - 200;

        fBill = (float) iTemp * 10;

        fTemp = fBill + (100*7) +(100*5);

        printf("Bill :%.2f\n",fTemp);
    }
}

int main()
{

    int iUnit = 0;
    printf("Enter Units :");
    scanf("%d",&iUnit);

    CalculateElectricityBill(iUnit);

    return EXIT_SUCCESS;
}
