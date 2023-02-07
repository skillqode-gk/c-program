// array -> collection of same datatype variable

// size -> index start with 0
// name[5] -> name[0], name[1], 2, 3, 4
// two types of array -> one dimensional & two dimensional
#include<stdio.h>
int main()
{
   int a[5][5];
   int i,j;
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
      printf("Enter a[%d][%d]: ",i,j);
      scanf("%d",&a[i][j]);
    }
   }
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
   }
   
}