#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   Pattern
// Description      :   Display the pattern on screen
// Input            :   Integer, Integer
// Output           :   Void
// Author           :   Prathmesh Sandipan Pawar
// Date             :   15/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRows,int iCols)
{

    int i = 0, j = 0;
    for(i = 1;i <= iRows ;i++)
    {
        for(j = 1;j <= iCols ;j++)
        {
            if((j % 2) == 0)
            {
                printf("#\t");
            }
            else
            {
               printf("*\t"); 
            }
            
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter how many rows u want :");
    scanf("%d",&iValue1);

    printf("Enter how many columns u want :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////////////////
//                                      Test
//------------------------------------------------------------------------------------------
//      Input  :
//------------------------------------------------------------------------------------------
//              Enter how many rows u want :3
//              Enter how many columns u want :4
//
//------------------------------------------------------------------------------------------
//      Output :
//------------------------------------------------------------------------------------------
//
//                *       #       *       #
//                *       #       *       #
//                *       #       *       #
//
//
////////////////////////////////////////////////////////////////////////////////////////////