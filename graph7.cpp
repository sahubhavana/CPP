class Solution {
public:
    vector<char> bfsofgraph(int V, vector<char> adj[]) {
        vector<char> bfs;              // to store BFS traversal
        vector<int> visited(V+1, 0);    // visited array
        queue<char> q;

        q.push(1);                    // start from node 0
        visited[1] = 1;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            bfs.push_back(node);

            for (int i : adj[node]) {
                if (!visited[i]) {
                    visited[i] = 1;
                    q.push(i);
                }
            }
        }
        return bfs;
    }
};
int main(){
    int vertex,edges;
    cin>>vertex>>edges;
    vector<char>adjlist[vertex+1];
    
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    Solution obj;
    vector<char>result=obj.bfsofgraph(vertex,adjlist);
    cout << "BFS Traversal: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}

