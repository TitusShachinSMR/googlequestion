#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int max(int a, int b)
{ if(a<b)
{ return b;
}
else {return a;
}
}
int main()
{ int a,b; int l=0,x;int i=2;
printf("enter the integers");
scanf("%d",&a);
scanf("%d",&b);
if(max(a,b)==a)
{ if(a%b==0)
{ printf("%d is lcm",a);
}

else{ 
while(l==0)
{ if(((a*i)%b)==0){l=l+1; x=a*i;
} ++i;
} printf("%d is lcm",x);
}

}
else{if(b%a==0)
{ printf("%d is lcm",b);
}

else{l=0;i=2;
 while(l==0)
{ 
if(((b*i)%a)==0){l=l+1; x=b*i;
} ++i;
} printf("%d is lcm",x);
}

}
}
