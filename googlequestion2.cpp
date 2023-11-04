#include <stdio.h>

int main() {
    int n,l=0,i,j;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int a[2*n+2];
    printf("Enter the array: ");
    for (int i = 0; i <2*n+2; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<2*n+2;i++)
    {l=0;
	for(j=i+1;j<2*n+2;j++)
    {if(a[i]==a[j])
    {l=l+1;a[j]=-4000;break;
	}
	}
	if(l==0&&a[i]!=-4000)
	{ printf("%d ",a[i]);
	}
	}
}

