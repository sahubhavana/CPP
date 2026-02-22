#include<conio.h>
#include<stdio.h>
int main()
{
   clrscr();
   int a, b, c, d ,e, f, g;
   printf(" enter value of n=");
   scanf(" %d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g);
   if(a>b){
     if(a>c){
       if(a>d){
         if(a>e){
           if(a>f){
             if(a>g){
                     printf("greater number is a");
             }else{
                    printf("greater number is  g");
             }
              
           }
         }
       }
     }
   }
   else{ 
        if(b>c){
          if(b>d){
            if(b>e){
              if(b>f){
                if(b>g){
                       printf("greater number is b");
                }
                else{
                     printf(" greater number is g");
                }
              }
            }
          }
        }
        else{
            if(c>d){
              if(c>e){
                if(c>f){
                  if(c>g){
                          printf (" greater number is c");
                  
                  }
                  else{
                       printf(" greater number is g");
                  }
                }
              }
            }
        
            else{
                  if(d>e){
                     if(d>f){
                        if(d>g){
                               printf(" greater number is d");
                               }
                        else{
                              printf(" greater number is g");
                            }
                          }
                        }
                      
                  else{
                       if(e>f){
                         if(e>g){
                                 printf (" greater number is e");
                                  }
                         else{
                              printf(" greater number is  g");
                
                             }
                          }
                       
                       else{
                           if(f>g){
                               printf (" greater number is f");
              
                                }
                           else{
                              printf (" greater number is g");
                              }
                           }   
                       }
                             
                    }
             }       
   }          
   getch();
}   
   







    