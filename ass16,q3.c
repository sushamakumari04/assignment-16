//3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
int i,j,r,c;
printf("enter the row and column of the matrics");
scanf("%d%d",&r,&c);
int A[r][c],B[c][r];
printf("enter the value in the matrix");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
   scanf("%d",&A[i][j]);
 }
}
printf("The transpose of the matrics is ");

for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
   B[j][i]=A[i][j];
 }
}
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
   printf("%d ",B[i][j]);
 }
}



 return 0;
 }
