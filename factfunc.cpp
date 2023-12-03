#include<stdio.h>
int fact(int n)
{ static int x=1;
 x=x*n;
 if(n>=2)
 { fact(n-1);
 }
 return x;
}
int main()
{ int n;
scanf("%d",&n);
printf("%d",fact(n));
}
