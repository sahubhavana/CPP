#include<stdio.h>
//using namespace std;

int main()
{
 int i,n, sum;
 sum=0;
 printf("enter a number in n");
 scanf("%d",&n);
 for(i=1;i<=n;i++) {
    sum=sum+i;
   
}
printf(" sum of n number=%d",sum);
}