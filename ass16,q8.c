//8. Write a program in C to print or display an upper triangular matrix.
#include<stdio.h>
int main()
{
int i,j,n;
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
   if(i==j||i<j)
   {
    printf("%d ",A[i][j]);
   }
 }
}
return 0;
}
