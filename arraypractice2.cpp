/*find the cyclic transfer of array by one space*/
#include<stdio.h>
int main()
{ int n,i,j,temp;
printf("enter the lenght of array\n");
scanf("%d",&n);int a[n];

printf("enter the array:"); 
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}int b[n+1];
int t=1;
for(i=0;i<n;i++)
{b[t]=a[i];++t;
}
b[0]=b[n];
for(i=0;i<n;i++)
{ printf("%d ",b[i]);
}}
