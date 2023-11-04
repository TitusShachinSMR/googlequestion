/*find the number of pairs in array whose sum is k*/

#include<stdio.h>
int main()
{ int n,i,j,x,l=0;
printf("enter the lenght of array\n");
scanf("%d",&n);int a[n];

printf("enter the array:\n"); 
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
printf("enter the key sum:\n");
scanf("%d",&x);
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{if(a[i]+a[j]==x)
{l=l+1;
}
}
}
printf("the number of pairs is %d",l);
}
