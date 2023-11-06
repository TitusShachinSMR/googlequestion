#include<stdio.h>
int main()
{ int i,j,k;int y,m;
int n;
printf("enter the array lenght:\n");
scanf("%d",&n);int a[n];
printf("enter the array 1:\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
printf("enter the lenght of array to be inserted\n");
scanf("%d",&m);int b[m];
printf("enter array 2:\n");
for(i=0;i<m;i++)
{scanf("%d",&b[i]);
}
printf("enter the position to enter\n");
scanf("%d",&y);
int c[m+n];int t=0;
for(i=0;i<n;i++)
{c[t]=a[i];++t;
}
for(i=n-1;i>=y-1;i--)
{c[m+i]=c[i];
} t=0;
for(i=y-1;i<=m+y-2;i++)
{c[i]=b[t];++t;
}
for(i=0;i<n+m;i++)
{printf("%d ",c[i]);
}

}
