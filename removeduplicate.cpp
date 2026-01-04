int main()
{
    int n=5;
    int a[5];
    for(int i=0;i<n;i++){
        printf("enetr a element");
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for ( int k = j; k <n-1; k++){
                    a[k]=a[k+1];
                }
                j--;
                n--;
                
                
            }

        }
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
