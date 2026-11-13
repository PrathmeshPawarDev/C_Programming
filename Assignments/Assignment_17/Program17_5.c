
/*
Enter How many Rows you want :4
Enter How many Columns you want :4
1       2       3       4
2       3       4       5
3       4       5       6
4       5       6       7

*/
#include <stdio.h>
#include <stdlib.h>

void pattern(int iRows, int iCols)
{
    int i = 0, j = 0 , k = 0;
    
    k = 1;
    for (i = 1; i <= iRows; i++)
    {
        
        for (j = 1; j <= iCols; j++)
        {   
           
                printf("%d\t", k);
                k++;
            
        }
         k = k - 3 ;

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
