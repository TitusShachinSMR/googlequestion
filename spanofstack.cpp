/*span of stock:For example, if you have the stock prices for five days:

Day 1: $100
Day 2: $120
Day 3: $130
Day 4: $110
Day 5: $140

The span for Day 1 would be 1 because there's no previous day to compare.
The span for Day 2 would be 2 because on the previous day (Day 1), the price was lower.
The span for Day 3 would be 3 because the prices on Day 2 and Day 1 were both lower.
The span for Day 4 would be 1 because the price on the previous day (Day 3) was higher.
The span for Day 5 would be 5 because the price on every previous day was lower.
So, the stock span problem asks you to find these span values for each day based on historical price data.
*/
#include<stdio.h>
int main()
{
 int n,sum,i,l=0;
 printf("enter the number of days\n");
 scanf("%d",&n);int a[n];
 printf("enter stock price \n");
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);
 }
 printf("1");
 for(i=1;i<n;i++)
 {if(a[i]>a[i-1])
 {printf("%d",i);}
 else{printf("1");}
 }
 
 }




