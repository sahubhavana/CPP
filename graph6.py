//////////////////Graph representation with the help of linked list//////////////////////////////
int main() {
    int vertex, edges;
    cin >> vertex >> edges;

    vector<int>Addlist[vertex];

    int u, v;
    for(int i = 0; i < edges; i++) {
        cin >> u >> v;
        Addlist[u].push_back(v);
        Addlist[v].push_back(u);   // undirected graph
    }

    for(int i = 0; i < vertex; i++) {
        cout << i << " -> ";
        for(int j = 0; j < Addlist[i].size(); j++) {
            cout << Addlist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
