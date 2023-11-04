/*Given the arrival and departure times of all trains that reach a railway station, the task is to find the minimum number of platforms required for the railway station so that no train waits. We are given two arrays that represent the arrival and departure times of trains that stop.

Examples: 

Input: arr[] = {9:00, 9:40, 9:50, 11:00, 15:00, 18:00}, 
dep[] = {9:10, 12:00, 11:20, 11:30, 19:00, 20:00} 
Output: 3 
Explanation: There are at-most three trains at a time (time between 9:40 to 12:00)

Input: arr[] = {9:00, 9:40}, 
dep[] = {9:10, 12:00} 
Output: 1 
Explanation: Only one platform is needed.*/
#include<stdio.h>
#include<math.h    >
int main()
{ int n,i,j,l=0;
printf("enter number of train:");
scanf("%d",&n);
printf("enter the array 1:\n"); float a[n],b[n];
for(i=0;i<n;i++)
{scanf("%f",&a[i]);
}printf("enter the array 2:\n");
for(i=0;i<n;i++)
{scanf("%f",&b[i]);
}
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{int x=a[i]-a[j];int y=b[i]-b[j];
if(x*y<=0)
{l=l+1;
}
}
}
printf("%d",l+1);}




