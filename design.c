#include<stdio.h>
void main()
{
    int rows=0,k=1;
    printf("enter the row numbers:");
    scanf("%d",&rows);
    int spc=rows +4 -1;
    for(int i=1;i<=rows;i++)
    {
        for(int j=spc;j>1;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf(" %d",k); 
            k++; 
        }
        printf("\n");
        spc--;
}
} 