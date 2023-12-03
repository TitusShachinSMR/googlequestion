#include<stdio.h>
int sum(int n)
{ static int x=0;
 x=x+n;
 if(n>=1)
 { sum(n-1);
 }
 return x;
}
int main()
{ int n;
scanf("%d",&n);
printf("%d",sum(n));
}
