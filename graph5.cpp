//////////////////////////////Directed weight graph using adjacency matrix//////////////////////////////
char arr[5]{'A','B','C','D','E'};
int graph[5][5]={0};
int main(){
    char u,v;
    int w;
    for (int i=0;i<6;i++){
        cin>>u>>v;
        cin>>w;
        int ui=u-'A';
        int vi=v-'A';
        graph[ui][vi]=w;
        

    }
    printf("  ");
    for(int i = 0; i < 5; i++){

        printf("%c ", arr[i]);
    }
    printf("\n");

    for(int i = 0; i < 5; i++) {
        printf("%c ", arr[i]);
        for(int j=0;j<5;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
        
    }
}
