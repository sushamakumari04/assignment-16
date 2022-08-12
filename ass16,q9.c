//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main()
{
int i,j,n,count=0;
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
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
   if(A[i][j]==0)
   {
    count++;
   }
 }
}
int N=n*n/2;
if(count>N)
{
 printf(" it is a sparse matrics having zeroes %d ",count);
}
else
{
printf("not a sparse matrics");
}


return 0;
}
