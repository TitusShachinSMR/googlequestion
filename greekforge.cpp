/* Given an array arr[] of N positive integers. The task is to find the maximum of j – i subjected to the constraint of arr[i] <= arr[j].

Examples : 

  Input: {34, 8, 10, 3, 2, 80, 30, 33, 1}
  Output: 6  (j = 7, i = 1)

  Input: {9, 2, 3, 4, 5, 6, 7, 8, 18, 0}
  Output: 8 ( j = 8, i = 0)

  Input:  {1, 2, 3, 4, 5, 6}
  Output: 5  (j = 5, i = 0)

  Input:  {6, 5, 4, 3, 2, 1}
  Output: 0*/


#include<stdio.h>
int main()
{int i,y,j,t,n;
scanf("%d",&n);//lenght of array 
int a[n];
for(i=0;i<n;i++)//array 
{ scanf("%d",&a[i]);
}
int max=0;
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{if(a[i]<=a[j])
{if((j-i)>max)
{max=j-i; t=j;y=i;
}
}
}
}
printf("max differnce %d between element %d and %d",max,y+1,t+1);
}
