
#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   CountChar
// Description      :   return count of frequency of character from string  
// Input            :   Character Pointer ,Character 
// Output           :   Integer
// Author           :   Prathmesh Sandipan Pawar
// Date             :   18/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////

int  CountChar(char *str,char ch)
{
    int iCount = 0;
   
     
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
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


    iRet = CountChar(Arr,cValue);

    printf("%d\n",iRet);


    return EXIT_SUCCESS;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//                  Test
//--------------------------------------------------------------------------------------------------
//      Input 1                      Input 2                            Output 
//--------------------------------------------------------------------------------------------------
//     Marvellous Multi OS             m                                  2
//
//     Marvellous Multi OS             w                                  0
//
////////////////////////////////////////////////////////////////////////////////////////////////////////