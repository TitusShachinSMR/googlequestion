/*An array contains both positive and 
negative numbers in random order. 
Rearrange the array elements so that all negative numbers
 appear before all positive numbers*/
#include<stdio.h>
int main()
{ int n,i,j,l=0;
printf("enter the lenght of array\n");
scanf("%d",&n);int a[n],b[n],c[n];

printf("enter the array:"); 
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}int t=0,p=0;
for(i=0;i<n;i++)
{if(a[i]<0)
{l=l+1;b[t]=a[i];++t;
}
else{c[p]=a[i];++p;
}}


for(i=0;i<l;i++)
{printf("%d ",b[i]);
}
for(i=0;i<n-l;i++)
{printf("%d ",c[i]);
}}
