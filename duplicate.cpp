#include<stdio.h>

 int main()
 {
     int a[10];
    for(int i=0;i<10;i++){
       printf("enetr a element");
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<10-1;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]==a[j]){
                  printf("element found=%d",a[i]);
                 break;
          }

       }
    }
 }
