#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   DisplayDigits
// Description      :   Display only digits from string
// Input            :   Character Pointer
// Output           :   Void
// Author           :   Prathmesh Sandipan Pawar
// Date             :   18/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigits(char *str)
{

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{

    char Arr[20];

    printf("Enter String :");
    scanf("%[^\n]s",Arr);

    DisplayDigits(Arr);

    return EXIT_SUCCESS;
}
////////////////////////////////////////////////////////////
//                  Test
//----------------------------------------------------------
//      Input                       Output 
//----------------------------------------------------------
//   marve89llous121                 89121
//
//      Demo
//
/////////////////////////////////////////////////////////////