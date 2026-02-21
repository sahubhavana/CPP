#include<conio.h>
#include<stdio.h>
int main()
{
   clrscr();
   int a, b, ch, sum;
   float div;
   printf (" enter a value of a, b=");
   scanf("%d%d", &a, &b);
   printf(" enter choice=");
   scanf("%d", &ch);
   label1:
         sum=a+b;
         printf (" sum of two number=%d",sum);
   label2:
         sum=a-b;
         printf (" sub of two number=%d", sum);
   label3:
         sum=a*b;
         printf (" mul of two number=%d", sum);
         
   label4:
         div=a/b;
         printf (" div of two number=%f", div);
   if(ch==1){
        goto label1;
   }
   else{
      if(ch==2){
         goto label2;
      }
      else{
         if(ch==3){
             goto label3;
             
         }
         else{
             if(ch==4){
                goto label4;
             }
             else{
                 printf (" invalid choice");
             }
             
         }
      }
      
   }
   
   
   getch();
       
}       







    