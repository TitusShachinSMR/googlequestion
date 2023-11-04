/*Given an array having positive and negative numbers, our task is to arrange them in an alternate fashion such that every positive number is followed by a negative number and vice-versa maintaining the order of appearance. The number of positive and negative numbers need not to be equal. If there are more positive numbers then they have to appear at the end of the array , same condition for negative numbers also .*/
#include<stdio.h>
int main()
{int n,i,j,temp,l=0;
printf("enter the lenght of array\n");
scanf("%d",&n);int a[n];

printf("enter the array:"); 
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{if(a[i]<0){l=l+1;}
}
int t=0,p=0;int b[l],c[n-l];
for(i=0;i<n;i++)
{
{if(a[i]<0){b[t]=a[i];++t;}
}
if(a[i]>0){c[p]=a[i];++p;}
} for(i=0;i<n;i++)
{printf("%d ",a[i]);
}printf("\n");
for(i=0;i<l;i++)
{printf("%d ",b[i]);
}printf("\n");
for(i=0;i<n-l;i++)
{printf("%d ",c[i]);
}
printf("\n");
t=0;p=0;
for(i=0;i<n;i++)
{ if(i%2==1&&t<=l-1){a[i]=b[t];++t;}
if(i%2==0&&p<=n-l-1){a[i]=c[p];++p;
}
}t=n-l;
if(l>n-l)
{for(i=2*(n-l);i<n;i++){a[i]=b[t];t++;}
}
p=l;
if(l<n-l){for(i=2*l;i<n;i++){a[i]=c[p];p++;}
}
for(i=0;i<n;i++)
{printf("%d ",a[i]);
}
}



