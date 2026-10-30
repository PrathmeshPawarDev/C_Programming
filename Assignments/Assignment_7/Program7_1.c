#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("$   *\t");
    }
}

int main()
{

    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    pattern(iValue);


    return EXIT_SUCCESS;
}