//Given an array that contains both positive and negative integers, the task is to find the product of the maximum product subarray



#include<stdio.h>
int main()
{ int n,i,j,m,t,product=1;
printf("enter the lenght of array\n");
scanf("%d",&n);int a[n];

printf("enter the array:"); 
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
} int max=a[0];
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{ product=product*a[j];
if((a[i]*product)>max)
{
max=(product*a[i]);
t=i;m=j;}
}product=1;
}
printf("max product=%d by product of %d to %d",max,t+1,m+1);
}
