#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   struprx
// Description      :   convert  lowercase to uppercast character
// Input            :   Character Pointer
// Output           :   Void
// Author           :   Prathmesh Sandipan Pawar
// Date             :   17/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////

void struprx(char *str)
{
    while((*str) != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        *str++;
    }
}


int main()
{

    char arr[20];

    printf("Enter String  :");
    scanf("%[^\n]s",arr);

    strlwrx(arr);

    printf("Modified string is : %s",arr);


    return EXIT_SUCCESS;
}
////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input                       Output 
//----------------------------------------------------------
//   marvellous multi os         Marvellous Multi OS     
//
/////////////////////////////////////////////////////////////