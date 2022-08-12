// 1.Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
int i,j,k;
int A[3][3],B[3][3],C[3][3];

printf("enter the value in the first matrix");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
   scanf("%d",&A[i][j]);
 }
}
printf("enter the value in the second matrix \n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
   scanf("%d",&B[i][j]);
 }
}
printf("The third matrix is sum of first and second matrix");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  C[i][j]=A[i][j]+B[i][j];
  printf("%d ",C[i][j]);
 }
}
return 0;
}
