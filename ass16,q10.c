//10. Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
int main()
{ int row ,col;
printf("enter the number of rows and cols");
scanf("%d%d",&row,&col);
int A[row][col];
printf("enter the value in the array");
for(int i=0;i<row;i++)
{
 for(int j=0;j<col;j++)
 {
  scanf("%d",&A[i][j]);
 }
}
int B[row];
for(int p=0;p<row;p++)
{
   B[row]=0;
}

int count=0;
for(int m=0;m<row;m++)
{
count=0;
 for(int n=0;n<col;n++)
 {
  if(A[m][n]==1)
  {
    count++;
  }
 }
 B[m]=count;
}
int largest;
largest=B[0];
for(int c=1;c<row;c++)
{
if(largest<B[c])
{
 largest=B[c];
}
}
for(int t=0;t<row;t++)
{
 if(B[t]==largest)
 {
  printf(" row %d has maximum number of 1s that is %d",t,largest);
 }
}





return 0;
}
