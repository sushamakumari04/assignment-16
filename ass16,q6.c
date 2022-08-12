//6. Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
int i,j,n,sum=0;
printf("enter the size of matrics \n");
scanf("%d",&n);
int A[n][n];
printf("enter the value in the matrix \n");
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
   scanf("%d",&A[i][j]);
 }
}
printf("sum of rows are \n");
for(i=0;i<n;i++)
{
  sum=0;
 for(j=0;j<n;j++)
 {
   sum=sum+A[i][j];
 }
  printf("%d ",sum);
}
printf("sum of col are \n");
for(i=0;i<n;i++)
{
  sum=0;
 for(j=0;j<n;j++)
 {
   sum=sum+A[j][i];
 }
  printf("%d ",sum);
}



return 0;
}
