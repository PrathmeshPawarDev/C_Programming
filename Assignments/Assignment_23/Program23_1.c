#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   strlwrx
// Description      :   convert uppercast character to lowercase
// Input            :   Character Pointer
// Output           :   Void
// Author           :   Prathmesh Sandipan Pawar
// Date             :   16/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////

void strlwrx(char *str)
{
    while((*str) != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    strlwrx(arr);

    printf("Modified string is : %s",arr);


    return EXIT_SUCCESS;
}
