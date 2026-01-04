int main(){
    int a[5];
    int num;
    int n=5;
    printf("Enter a array element:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("enter a postion a which you have to delete a element");
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        if(i==num){
             for(int k=i;k<n-1;k++){
                a[i]=a[i+1];
             }
        }
    }
    for(int i=0;i<n-1;i++){
        printf("%d",a[i]);
    }

}
