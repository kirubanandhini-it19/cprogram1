#include<stdio.h>
void main()
{
 int i,n,c=1;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
c=c*i;
printf("factorial of %d=%d",i,c);
}
