#include<stdio.h>
int main(){
    int i,j, k=1;
    for(i=0;i<5;i++){
       for(k=0;k<5-i;k++){
          printf ("_");
       }
       for(j=1;j<=2*i-1;j++){
         printf ("*");
         //k++;
       }
       printf ("\n");
    }
    
    
    
    
    for(i=0;i<9;i++){
       for(k=0;k<i;k++){
          printf ("_");
       }
       for(j=1;j<=9-2*i;j++){
         printf ("*");
         //k++;
       }
       printf ("\n");
    }
   
}



    