//2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
int m,n,k,i,j,sum=0;
int A[3][3],B[3][3],C[3][3];

printf("enter the value in the first matrix");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
   scanf("%d",&A[i][j]);
 }
}
printf("enter the value in the second matrix");
printf("\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
   scanf("%d",&B[i][j]);
 }
}
printf("the product of two matrics are");
for(k=0;k<3;k++)
{
 for(n=0;n<3;n++)
 {
   sum=0;
   for(m=0;m<3;m++)
   {
    sum=sum+A[k][m]*B[m][n];
   }
   C[k][n]=sum;
   printf("%d ",C[k][n]);
 }
}



return 0;
}
