/*
Enter How many Rows you want :4
Enter How many Columns you want :4
4       4       4       4
3       3       3       3
2       2       2       2
1       1       1       1
*/
#include <stdio.h>
#include <stdlib.h>

void pattern(int iRows, int iCols)
{
    int i = 0, j = 0 , k = 0;
    k = iRows;
    for (i = 1; i <= iRows; i++)
    {

        for (j = 1; j <= iCols; j++)
        {
            printf("%d\t", k);
        }
        k--;

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
