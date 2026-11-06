#include<stdio.h>
#include<stdlib.h>

 typedef BOOL;
#define false 0
#define true  1



//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : ChkVowels()
// Description   : It is used to  accept one character from user and check it is vowel or not
//                 upper case  and if it is in Uppercase then convert it into lowercase
// Input         : Char
// Output        : boolean
// Author        : Prathmesh Sandipan Pawar
// Date          : 27/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////
BOOL ChkVowels(char cValue)
{
    if((cValue) == 'a' || (cValue) =='e' ||(cValue) == 'i' ||(cValue) == 'o'  ||(cValue) == 'u' || (cValue) =='A' ||(cValue) == 'E' ||(cValue) == 'I' || (cValue) =='O' ||(cValue) == 'U' )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    char cValue ='\0';
    BOOL bRet = false;

    printf("Enter a character ");
    scanf("%c",&cValue);

    bRet = ChkVowels(cValue);

    if(bRet == true)
    {
        printf("Character is vowel ");
    }
    else
    {
        printf("Character is Consonantscd  ");  
    }


    return EXIT_SUCCESS;
}