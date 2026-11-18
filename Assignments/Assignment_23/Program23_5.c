#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CountWhite
// Description      :   return Count of white space from string
// Input            :   Character Pointer
// Output           :   Void
// Author           :   Prathmesh Sandipan Pawar
// Date             :   18/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////

int  CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == ' '))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{

    char Arr[20];
    int iRet = 0;


    printf("Enter String :");
    scanf("%[^\n]s",Arr);

    iRet = CountWhite(Arr);

    printf("White Space :%d\n",iRet);

    return EXIT_SUCCESS;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//                  Test
//--------------------------------------------------------------------------------------------------
//      Input                                                 Output 
//--------------------------------------------------------------------------------------------------
//     I am Student of Marvellous InfoSystem                    5
//
//      Demo                                                    0
//
////////////////////////////////////////////////////////////////////////////////////////////////////////