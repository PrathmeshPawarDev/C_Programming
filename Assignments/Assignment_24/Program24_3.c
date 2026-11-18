
#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   FirstChar
// Description      :   return index of first character from string  
// Input            :   Character Pointer ,Character 
// Output           :   Integer
// Author           :   Prathmesh Sandipan Pawar
// Date             :   18/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////

int  FirstChar(char *str,char ch)
{
   
   int iIndex = -1;

    while(*str != '\0')
    {
        iIndex++;
        if(*str == ch)
        {
            return iIndex;
        }
        str++;
    }
    return -1;
}

int main()
{

    char Arr[20] ;
    char cValue ;
    int iRet = 0;


    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character :\n");
    scanf(" %c",&cValue);


    iRet = FirstChar(Arr,cValue);

    printf("%d\n",iRet);


    return EXIT_SUCCESS;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//                  Test
//--------------------------------------------------------------------------------------------------
//      Input 1                      Input 2                            Output 
//--------------------------------------------------------------------------------------------------
//     Marvellous Multi OS             M                                  0
//
//     Marvellous Multi OS             e                                  4
//
//     Marvellous Multi OS             w                                  -1
//
////////////////////////////////////////////////////////////////////////////////////////////////////////