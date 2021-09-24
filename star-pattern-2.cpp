#include<stdio.h> //for printing butterfly patten.
int main()
{
    int row;
    printf("Enter number of rows: ");
    scanf("%d",&row);

     for (int i=1;i<=row;i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("* ");
        }

        for (int spc = 1;spc<=2*row-2*i;spc++)
        {
            printf("  ");
        }
        
        for (int j=1; j<=i; j++)
        { 
            printf("* ");
        }
        printf("\n");

    }    
    
    for ( int i=row;i>=1;i--)
    {
        for (int j=1; j<=i; j++)
        {
            printf("* ");
        }

        for (int spc = 1;spc<=2*row-2*i;spc++)
        {
            printf("  ");
        }
        
        for (int j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");

    }
    return 0;
        
}
        
