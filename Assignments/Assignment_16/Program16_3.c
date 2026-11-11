/*

A       A       A       A       A
B       B       B       B       B
C       C       C       C       C

*/
#include <stdio.h>
#include <stdlib.h>

void pattern(int iRows, int iCols)
{
    int i = 0, j = 0;
    char ch = 'A';
    for (i = 1, ch = 'A'; i <= iRows; i++, ch++)
    {

        for (j = 1; j <= iCols; j++)
        {
            printf("%c\t", ch);
        }

        printf("\n");
    }
}

int main()
{

    int iValue1 = 0, iValue2 = 0;

    printf("Enter How many Rows you want :");
    scanf("%d", &iValue1);

    printf("Enter How many Columns you want :");
    scanf("%d", &iValue2);

    pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
