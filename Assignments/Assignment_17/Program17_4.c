
/*
Enter How many Rows you want :5
Enter How many Columns you want :5
1       2       3       4       5
-1      -2      -3      -4      -5
1       2       3       4       5
-1      -2      -3      -4      -5
1       2       3       4       5

*/
#include <stdio.h>
#include <stdlib.h>

void pattern(int iRows, int iCols)
{
    int i = 0, j = 0 , k1 = 0,k2 = 0;
    
    k1 = 1;
    k2 = -1;
    for (i = 1; i <= iRows; i++)
    {
        if(k1 > 5  )
            {
                k1 = 1;
                k2 = -1;
            }
        for (j = 1; j <= iCols; j++)
        {   
            if( i % 2 == 0)
            {
                printf("%d\t", k2);
                k2--;
            }
            else
            {
                printf("%d\t", k1);
                k1++;
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
