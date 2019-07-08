#include<stdio.h>
#include<conio.h>
void floyd(int a[10][10],int n)
{
 int i,j,k;
 for(k=0;k<n;k++)
 {
  for(i=0;i<n;i++)
   for(j=0;j<n;j++)
    if(a[i][j] > a[i][k]+a[k][j])
     a[i][j] =a[i][k]+a[k][j];
 }
}
void main()
{
 int i,j,k,a[10][10],n;
 clrscr();
 printf("\nEnter the value of n->");
 scanf("%d",&n);
 printf("\nEnter the cost adj matrix->");
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);
 floyd(a,n);
 printf("The answer is-->\n");
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
    printf("%d ",a[i][j]);
   printf("\n");
  }
 getch();
}
