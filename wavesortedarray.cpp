//sorted waveform (large,small,large,small)

#include<stdio.h>
int main()
{int i,j,k,n,temp;
printf("array lenght:\n");
scanf("%d",&n);
printf("enter the array\n");int a[n];
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{if(i%2==1)
{if(a[i]>a[i-1])
{temp=a[i];
a[i]=a[i-1];
a[i-1]=temp;
}
}
}
for(i=0;i<n;i++)
{printf("%d ",a[i]);
}
}
