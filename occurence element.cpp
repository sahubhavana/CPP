#include<conio.h>
#include<stdio.h>
int main()
{
   clrscr();
   int a[30];
   int max, i, s, n, count=0;
   printf(" enter length of array");
   scanf("%d", &n);
   for(i=1;i<n;i++){
       printf (" enter a element");
       scanf("%d", &a[i]);
   }
   printf(" enter element to search");
   scanf("%d", &s);
   for(i=0;i<=n;i++){
       if(s==a[i]){
          count=count+1;
         
       }
       //printf(" maximum number %d", max);
       }
       
     printf (" occurence of number %d", count);
     getch();
       
}       







    