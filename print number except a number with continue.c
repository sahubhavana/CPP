#include<stdio.h>
//using namespace std;

int main()
{
    int i,n;
    for(i=1;i<=10;i++) {
      if(i==6) {
        continue;
      }
      else{
      printf("%d", i);
      }
    }

}

