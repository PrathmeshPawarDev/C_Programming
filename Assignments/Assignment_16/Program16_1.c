/*
Enter How many Rows you want :4
Enter How many Columns you want :4
A       B       C       D
A       B       C       D
A       B       C       D
A       B       C       D

*/
#include<stdio.h>
#include<stdlib.h>

void pattern(int iRows ,int iCols)
{
    int i = 0,j = 0;
    char ch = 'A';
    for(i = 1; i <= iRows ; i++)
    {
        ch = 'A';
        for(j = 1;j<= iCols;j++)
        {
            printf("%c\t",ch);
            ch++;
        }
         printf("\n");
    }
   
}

int main()
{

    int iValue1 = 0,iValue2 = 0;

    printf("Enter How many Rows you want :");
    scanf("%d",&iValue1);

    printf("Enter How many Columns you want :");
    scanf("%d",&iValue2);

    pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}
