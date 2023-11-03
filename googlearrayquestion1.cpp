/*Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.*/
#include<stdio.h>
int main()
{ int n,i,j,l=0,m,t,x,sum=0;
printf("enter the lenght of array\n");
scanf("%d",&n);int a[n];
printf("enter the sum:");
scanf("%d",&x);

printf("enter the array:"); 
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{ sum=sum+a[j];
if((a[i]+sum)==x)
{ m=i;t=j;l=l+1;break;
}

}
if(l>0)
{break;
}
}
if(l==0){printf("such subarray is not present");
}
printf("%d to %d",m+1,t+1);
}
