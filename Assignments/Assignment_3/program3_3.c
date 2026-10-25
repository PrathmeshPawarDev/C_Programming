//write a program which accept number from user and print even factor of that number 

#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : DisplayFactor
// Description   : It is used to  accept one number from user print even factor of that number
// Input         : Integer
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 25/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i=1;i<=(iNo/2);i++)
    {
        if(iNo % i == 0 && i%2 ==0)
        {
            printf("%d ",i);
        }
    }
}

int main()
{

    int iValue = 0;

    printf("Enter a Number");
    scanf("%d",&iValue);

    DisplayFactor(iValue);


    return EXIT_SUCCESS;
}