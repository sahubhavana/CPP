
#include<conio.h>
#include<stdio.h>
int main() 
{  

   clrscr();
   int a,b, c,d, e;
   printf("enter a value=");
   scanf("%d%d%d%d", &a, &b, &c, &d, &e);
   if(a>b){
      if(a>c){
          if(a>d){
             if(a>e){
             
                  printf("%d a is greater", a);
          }
          else{
                if (a=b=c=d=e){
                              printf(" all are equal");
                }
                else{
                 printf("%d e is graeter", e);
                }
          }
      }            
   }
 }  
   else{
         if(b>c){
            if(b>d){
              if(b>e){
                     printf("%d b is greater", b);
            }
            else{
                  if(a=b=c=d){
                               printf("all are equal");
                  }
                  else{
                        printf("%d e is greater", e);
                  }     
            }
            
         }   
   }
         else{
               if(c>d){
                  if(c>e){
                        printf("%d c is greatet", c);
                        
               }
         }      
                  else{
                     if (a=b=c=d){
                                   printf(" all are equal");
                     }
                     else{
                           printf("%d e is greater", e);
                     }
                  }
               else{
                     if(d>e){
                              printf("%d is greater", d);
                              
                     }
                     else{
                            if(a=b=c=d){
                                      printf("all are equal");
                         }
                         else{
                                 printf("%d is greater", e);
                         }         
                   
                     }
               
               }
         }
   }
   getch();
}     
   
   
   
   
   
   

    
  
    