#include<stdio.h>
int main() 
{ 
   int a, b, c;
   printf(" enter a two number");
   scanf("%d%d",&a,&b);
   if(a>b){
       c=a;
       a=b;
       b=c;
   printf(" %d%d",a,b);
   }
   //printf(" %d%d",&a,&b);
}