#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : CalculateBonus
// Description   : It is used to calculate Bonus 
// Input         : Float ,Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 28/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////



void CalculateBonus(float fSalary,int iYear)
{
    float fBonus = 0.0f;

    if(iYear <= 0 || fSalary <= 0)
    {
        printf("Enter positive Input ...");
    }
    else
    {
        
        if(iYear <= 5)
        {
            fBonus = (fSalary * 5)/100;
            printf("Bonus :%.2f ",fBonus);
        }
        else if(iYear > 5 && iYear <= 10)
        {
            fBonus = (fSalary * 10)/100;
            printf("Bonus :%.2f ",fBonus);
        }
        else if(iYear >10)
        {
            fBonus = (fSalary * 15)/100;
            printf("Bonus :%.2f ",fBonus);
        }
    }

}

int main()
{
    float fSalary = 0.0f;
    int iYear = 0;

    printf("Enter salary and year of service :");
    scanf("%f%d",&fSalary,&iYear);

    CalculateBonus(fSalary,iYear);

    return EXIT_SUCCESS;
}