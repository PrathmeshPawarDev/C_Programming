//Accept one character from user and convert it into UpperCase

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : DisplayConvert
// Description   : It is used to  accept one character from user and if it is in lowercase then convert it in
//                 upper case  and if it is in Uppercase then convert it into lowercase
// Input         : Char
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 25/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue - 32);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Charater \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}