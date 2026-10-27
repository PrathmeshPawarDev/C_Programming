#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//      
// Function Name : CheckCharacterType
// Description   : It is used to check the given number is Uppercase 
//                  ,LowerCase,Digit or  SpecialSymbol
// Input         : Character
// Output        : void
// Author        : Prathmesh Sandipan Pawar
// Date          : 27/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////
void CheckCharacterType(char cValue)
{
    if(cValue >= 65 && cValue <=90)
    {
        printf("%c is UpperCase ..",cValue);
    }
    else  if(cValue >= 97 && cValue <=122)
    {
        printf("%c is LowerCase ..",cValue);
    }
    else  if(cValue >= '0' && cValue <='9')
    {
        printf("%c is Digit ..",cValue);
    }
    else
    {
       printf("%c is Special Symbol ..",cValue);
    }
}

int main()
{

    char cValue = '\0';

    printf("Enter a Chaeracter ");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);



    return EXIT_SUCCESS;
}