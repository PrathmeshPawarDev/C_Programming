
#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    :   StrRevX
// Description      :   reverse string
// Input            :   Character Pointer
// Output           :   Void
// Author           :   Prathmesh Sandipan Pawar
// Date             :   18/11/2026
//
/////////////////////////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{

    char *start = str;
    char *end = str;
    char Temp = '\0'; 
    

    while (*end != '\0')
    {
        end++;
    }
    end--;


    while (start < end)
    {
        Temp = *start;
        *start = *end;
        *end = Temp;
        
        start++;
        end--;
        
    }

}

int main()
{

    char Arr[20];
   
  

    printf("Enter String:");
    scanf("%[^'\n']s", Arr);


    StrRevX(Arr);

    printf("%s",Arr);

    return EXIT_SUCCESS;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
//                  Test
//--------------------------------------------------------------------------------------------------
//      Input 1                            Output
//--------------------------------------------------------------------------------------------------
// 
//      hello                               olleh
//
//      NAman                               namAN
//
////////////////////////////////////////////////////////////////////////////////////////////////////////