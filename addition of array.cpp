#include<conio.h>
#include<stdio.h>
int main()
{
   clrscr();
   int a[30];
   int b[30];
   int c[30];
   int max, i, s, n, count=0;
   printf(" enter length of array");
   scanf("%d", &n);
   for(i=0;i<n;i++){
       printf (" enter a element");
       scanf("%d", &a[i]);
   }
   for(i=0;i<n;i++){
        printf (" enter a element");
        scanf("%d", &b[i]);
          
       }
       for(i=0;i<n;i++)
       {
         c[i]=a[i]+b[i];
         printf (" addition of array %d", c[i]);
       }
       
     getch();
       
}       







    