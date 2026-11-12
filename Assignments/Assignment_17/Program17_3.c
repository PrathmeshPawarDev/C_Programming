
/*
Enter How many Rows you want :5
Enter How many Columns you want :5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e

*/
#include <stdio.h>
#include <stdlib.h>

void pattern(int iRows, int iCols)
{
    int i = 0, j = 0 , k = 0;
    char ch = '\0';
    ch = 'a';
    k = 1;
    for (i = 1; i <= iRows; i++)
    {
        if(k > 5 || ch > 'e' )
            {
                k = 1;
                ch = 'a';
            }
        for (j = 1; j <= iCols; j++)
        {   
            if( i % 2 != 0)
            {
                printf("%c\t", ch);
                ch++;
            }
            else
            {
                printf("%d\t", k);
                k++;
            }
           
            
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
