//4. Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>
int main()
{
int i,j,n;
printf("enter the size of matrics");
scanf("%d",&n);
int A[n][n];
printf("enter the value in the matrix");
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
   scanf("%d",&A[i][j]);
 }
}
int sum=0;
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
   if(i==j)
   {
     sum=sum+A[i][j];
   }
 }
}
printf("the sum of  right digonal is %d",sum);
//printf("%d ",sum);

return 0;
}
