#include<stdio.h>
int main() {
   int a[2][2],b[2][2], c[2][2];
   for(int i=0;i<2;i++){
       for(int k=0;k<2;k++){
        printf(" enter element of 1array");
        scanf("%d", &a[i][k]);
        }
}
       for(int i=0;i<2;i++){
       for(int k=0;k<2;k++){
        printf(" enter element of 2array");
        scanf("%d", &b[i][k]);
        }
        }
       for(int i=0;i<2;i++){
       for(int k=0;k<2;k++){
        c[i][k]=a[i][k]+b[i][k];
        printf(" enter element of array%d\n",c[i][k]);
}
}
}