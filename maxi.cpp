/*Given an array arr[] of n integers, find the maximum that maximizes the sum of the value of i*arr[i] where i varies from 0 to n-1.

Examples:  

Input: arr[] = {8, 3, 1, 2}
Output: 29
Explanation: Lets look at all the rotations,
{8, 3, 1, 2} = 8*0 + 3*1 + 1*2 + 2*3 = 11
{3, 1, 2, 8} = 3*0 + 1*1 + 2*2 + 8*3 = 29
{1, 2, 8, 3} = 1*0 + 2*1 + 8*2 + 3*3 = 27
{2, 8, 3, 1} = 2*0 + 8*1 + 3*2 + 1*3 = 17

Input: arr[] = {3, 2, 1}
Output: 7
Explanation: Lets look at all the rotations,
{3, 2, 1} = 3*0 + 2*1 + 1*2 = 4
{2, 1, 3} = 2*0 + 1*1 + 3*2 = 7
{1, 3, 2} = 1*0 + 3*1 + 2*2 = 7 */
#include<stdio.h>
int adj(int arr[],int n)
{ int i, b[n+1];int t=0,sum=0;
for(i=0;i<n;i++)
{b[t]=arr[i];++t;
}
b[0]=b[n];
for(i=0;i<n;i++)
{arr[i]=b[i];}
for(i=0;i<n;i++)
{ sum=sum+arr[i]*i;
}
return sum;}



int main()
{ int n,i,j,m,temp,sum=0;
printf("enter the lenght of array\n");
scanf("%d",&n);int a[n];


printf("enter the array:"); 
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{sum=sum+a[i]*i;
}
int max=sum,y;
for(i=1;i<=n-1;i++)
{  y=adj(a,n);
 if(y>max){max=y;
 }
}

printf("max=%d",max);}
