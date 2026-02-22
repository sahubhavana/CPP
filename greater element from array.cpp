#include<conio.h>
#include<stdio.h>
int main()
{
   clrscr();
   int a[30];
   int max, i, n;
   printf(" enter length of array");
   scanf("%d", &n);
   for(i=1;i<n;i++){
       printf (" enter a element");
       scanf("%d", &a[i]);
   }
   max=0;
   for(i=0;i<=n-1;i++){
       if(max<a[i]){
          max=a[i];
       }
       //printf(" maximum number %d", max);
       }
       
     printf (" greater number %d", max);
     getch();
       
}       







    