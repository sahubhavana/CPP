///////////////////////////// Adjacency matrix Representatio of unweighted of un diected graph////////////////////////


int arr[5]={1,2,3,4,5};
int garph[5][5]={0};
int main(){
    int u,v;
    for(int i=0;i<6;i++){
        cin>>u>>v;
        garph[u-1][v-1]=1;
        garph[v-1][u-1]=1;

    }
    printf("  ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
        for(int j=0;j<5;j++){
            cout<<garph[i][j]<<" ";
        }
       
    cout<<endl;
    }
}
