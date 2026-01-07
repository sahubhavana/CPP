///////////////////////////// Adjacency list Representation of directed graph////////////////////////

int arr[5]={1,2,3,4,5};
int graph[5][5]={0};
int main(){
    int u,v;
    for(int i=0;i<6;i++){
        cin>>u>>v;
        graph[u-1][v-1]=1;

    }
    printf("  ");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){

        printf("%d ",arr[i]);
        for(int j=0;j<5;j++){
            cout<<graph[i][j]<<" ";

     }
    cout<<endl;
}
}
