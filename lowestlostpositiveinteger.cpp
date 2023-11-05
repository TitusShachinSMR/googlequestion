//minimum postitve number missing in array 
//having positive and negative number
#include<stdio.h>
int main()
{ int n,i,j,l=0,m,temp;
 printf("enter the array size\n");
 scanf("%d",&n);int a[n];
 printf("enter array\n");
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {if(a[i]>0){l=l+1;
 }
 }int b[l];int t=0;
 for(i=0;i<n;i++)
 { if(a[i]>=0)
 {b[t]=a[i];t++;
 }
 }
 for(i=0;i<l-1;i++)
 {for(j=0;j<l-1-1;j++)
 { if(b[j]>b[j+1])
 {temp=b[j+1];
 b[j+1]=b[j];
 b[j]=temp;
 }
 }
 }
int min=b[0];
 for(i=0;i<l;i++)
 { 
 if(b[i]!=(min+i))
 {m=i;break;
 }
 }
 printf("missed positive smallest integer =%d",b[m]-1);}
