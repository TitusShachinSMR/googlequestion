#include<stdio.h>
#include<math.h>
int main()
{
int i,j,y,m,sum=0;
for(i=1;i<=1000;i++)
{ y=log(i)/log(10);int x=i;
for(j=1;j<=y+1;j++)
{
m=i%10;
 sum = sum +pow(m,y+1);
 i=i/10;
}
if(sum==x)
{ printf("%d\n",x);
}
sum=0;i=x;
}
}
