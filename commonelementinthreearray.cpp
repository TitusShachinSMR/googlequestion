
#include<stdio.h>
int main()
{ int n,m,i,j,p,l=0;int y=1;
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
printf("enter the lenght of array 3\n");
scanf("%d",&p);int c[p];
printf("enter sorted array3:"); 
for(i=0;i<p;i++)
{scanf("%d",&c[i]);
}
int d[m+n+p];
int r=0;
for(i=0;i<n;i++)
{d[r]=a[i];++r;
}
r=n;
for(i=0;i<m;i++)
{d[r]=b[i];++r;
}
r=m+n;
for(i=0;i<p;i++)
{d[r]=c[i];++r;
}
for(i=0;i<m+n+p;i++)
{for(j=i+1;j<m+n+p;j++)
{if(d[i]==d[j]&&d[j]!=-40000)
{l=l+1;d[j]=-40000;
}
}
if(d[i]!=-40000&&l==2)
{
printf("%d st/nd common element in all array is %d\n",y,d[i]);
 ++y;}l=0;
}}
