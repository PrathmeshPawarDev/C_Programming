
/*
Enter how many rows u want :4
Enter how many columns u want :4
1       2       3       4
        2       3       4
                3       4
                        4

*/

#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRows,int iCols)
{
    int i = 0, j = 0;

    for(i = 1 ; i <= iRows ;i++)
    {
        for(j = 1; j <= iCols ;j++)
        {
            if( (i <= j) )
            {
                printf("%d\t",j);
            }
            else
            {
                 printf(" \t");
            }
            
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter how many rows u want :");
    scanf("%d",&iValue1);

    printf("Enter how many columns u want :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);


    return EXIT_SUCCESS;
}