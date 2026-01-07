//////////////////////////////Undirected weighted graph using adjacency matrix//////////////////////////////
int arrr[5]={1,2,3,4,5};
int graph[5][5]={0};
int main(){
    int u,v,w;
    for(int i=0;i<6;i++){
        cin>>u>>v>>w;
        graph[u-1][v-1]=w;
        graph[v-1][u-1]=w;
    }
    printf("  ");
    for(int i=0;i<5;i++){
        printf("%d  ",arrr[i]);

    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d ",arrr[i]);
        for(int j=0;j<5;j++){
            cout<<graph[i][j]<<"  ";
        }
        cout<<endl;
    }
}


