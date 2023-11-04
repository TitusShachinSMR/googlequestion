/*union of sorted array*/
#include<stdio.h>
int main()
{ int n,m,i,j,l=0;
printf("enter the lenght of array 1\n");
scanf("%d",&n);int a[n];

printf("enter sorted array1:"); 
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
printf("enter the lenght of array 2\n");
scanf("%d",&m);int b[m];
printf("enter sorted array2:"); 
for(i=0;i<m;i++)
{scanf("%d",&b[i]);
}
int c[n+m];int r=0;
for(i=0;i<n;i++)
{c[r]=a[i];++r;
}
r=n;
for(i=0;i<m;i++)
{c[r]=b[i];++r;
}
for(i=0;i<n+m;i++)
{for(j=i+1;j<n+m;j++)
{if(c[i]==c[j]&&c[i]!=-4000)
{c[j]=-4000;l=l+1;
}
}
if(l>0&&c[i]!=-4000){printf("%d ",c[i]);}
if(l==0&&c[i]!=-4000){printf("%d ",c[i]);}
l=0;
}
}


