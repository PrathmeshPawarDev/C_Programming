
/*
Enter How many Rows you want :4
Enter How many Columns you want :5
2       4       6       8       10
1       3       5       7       9
2       4       6       8       10
1       3       5       7       9

*/
#include <stdio.h>
#include <stdlib.h>

void pattern(int iRows, int iCols)
{
    int i = 0, j = 0 , k = 0;
    k = 2;
    for (i = 1; i <= iRows; i++)
    {
        if(k > 10 && i % 2 == 0)
            {
                k = 1;
            }else
            {
                k = 2;
            }
        for (j = 1; j <= iCols; j++)
        {
            
            
            printf("%d\t", k);
            k=k+2;
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
