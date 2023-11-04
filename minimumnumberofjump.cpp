/*Given an array arr[] where each element represents the max number of steps that can be made forward from that index. The task is to find the minimum number of jumps to reach the end of the array starting from index 0.

Examples: 

Input: arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
Output: 3 (1-> 3 -> 9 -> 9)
Explanation: Jump from 1st element to 2nd element as there is only 1 step.
Now there are three options 5, 8 or 9. If 8 or 9 is chosen then the end node 9 can be reached. So 3 jumps are made.

Input:  arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
Output: 10
Explanation: In every step a jump is needed so the count of jumps is 10.*/
#include<stdio.h>
int main()
{ int n,sum,i,l=0;
 printf("enter the array size\n");
 scanf("%d",&n);int a[n];
 printf("enter array\n");
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);
 }
 sum=a[0];
 while(sum+1<n)
 {sum=sum+a[sum];
   
 if(sum>=n)
 {break;
 }
 l=l+1;
 }
 printf("number of jump is %d",l+2);
}
