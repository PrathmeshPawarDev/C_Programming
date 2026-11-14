
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   Display the pattern on screen
// Input            :   Integer
// Output           :   Void
// Author           :   Prathmesh Sandipan Pawar
// Date             :   15/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    ch = 'A';
    
    for(iCnt = 1;iCnt <= iNo ;iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
        

}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);


    Pattern(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//                      Test
//------------------------------------------------------------------------------------------
//      Input                   Output 
//------------------------------------------------------------------------------------------
//      5                   A       B       C       D       E
//
//      7                   A       B       C       D       E       F       G
//
////////////////////////////////////////////////////////////////////////////////////////////