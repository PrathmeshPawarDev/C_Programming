#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   strtogglex
// Description      :   convert  lowercase to uppercast character and uppercast character to lowercase
// Input            :   Character Pointer
// Output           :   Void
// Author           :   Prathmesh Sandipan Pawar
// Date             :   17/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////

void strtogglex(char *str)
{
    while((*str) != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        *str++;
    }
}


int main()
{

    char arr[20];

    printf("Enter String  :");
    scanf("%[^\n]s",arr);

    strtogglex(arr);

    printf("Modified string is : %s",arr);


    return EXIT_SUCCESS;
}
////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input                       Output 
//----------------------------------------------------------
//   Marvellous Multi OS         mARVELLOUS mULTI os
//
/////////////////////////////////////////////////////////////