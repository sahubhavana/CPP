int main(){
    int n;
    int count=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        count=i;
        for(int j=0;j<i;j++){
           cout<< count <<" ";
           count=count+1;

        }
        
        cout<<endl;
    }
}
