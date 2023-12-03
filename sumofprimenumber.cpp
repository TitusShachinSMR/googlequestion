#include<stdio.h>
#include<stdlib.h>
int prime(int n)
{ int i;
for(i=2;i<=n;i++)
{ if(n%i==0&&i!=n)
{ return 0;exit(1);
}
else{
continue;
}
}
}
int main()
{ int n,i,j,t=0;
scanf("%d",&n);
int a[n];
for(i=2;i<n;i++)
{ if(prime(i))
{ a[t]=i;++t; 
}
}
for(i=0;i<t;i++)
{ for(j=i+1;j<t;j++)
{if(a[i]+a[j]==n)
{printf("yes"); exit(1);
}
}
}

}
