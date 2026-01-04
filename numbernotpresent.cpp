int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={2,3,1,0,5};
    for(int i=0 ;i<5-1;i++){
        int found=0;
        for ( int j =0 ; j<5;j++){
            if(a[i]==b[j]){
                found=1;
                break;

            }
        }
            if(!found){
                printf("elemnet not in another array=%d",a[i]);
            }
            
}
}
