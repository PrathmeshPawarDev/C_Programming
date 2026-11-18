
#include<stdio.h>
#include<stdlib.h>


/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   LastChar
// Description      :   return index of last Occurennce from string  
// Input            :   Character Pointer ,Character 
// Output           :   Integer
// Author           :   Prathmesh Sandipan Pawar
// Date             :   18/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////

int  LastChar(char *str,char ch)
{
   
   int iIndex = -1;
   int iLastIndex = -1;
   

    while(*str != '\0')
    {
        iIndex++;
        if(*str == ch)
        {
           iLastIndex = iIndex;
        }
        str++;
    }

    return iLastIndex;
    
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


    iRet = LastChar(Arr,cValue);

    printf("%d\n",iRet);


    return EXIT_SUCCESS;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//                  Test
//--------------------------------------------------------------------------------------------------
//      Input 1                      Input 2                            Output 
//--------------------------------------------------------------------------------------------------
//     Marvellous Multi OS             M                                  11
//
//     Marvellous Multi OS             e                                  4
//
//     Marvellous Multi OS             w                                  -1
//
////////////////////////////////////////////////////////////////////////////////////////////////////////