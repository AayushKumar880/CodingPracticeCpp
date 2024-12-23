#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    unordered_map<int, list<pair<int, int>>> adj;
    vector<vector<int>> edge;

    void addEdge(int u, int v, int weight)
    {
        adj[u].push_back(make_pair(v, weight));
        adj[v].push_back(make_pair(u, weight));
        // if(!direction){
        //     adj[v].push_back(u);
        // }
    }

    void Edge(int u, int v, int weight){
        edge.push_back({u,v,weight});
    }

    void printAdj()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j.first << ", ";
            }
            cout << endl;
        }
    }

    void minSpanTreePrimAlgo(int source)
    {
        int n = adj.size();
        vector<int> key(n, INT_MAX);
        vector<bool> mst(n);
        vector<int> parent(n, -1);

        key[source] = 0;
        int mini = INT_MAX;
        int u;

        for (int i = 0; i < n; i++)
        {
            if (!mst[i] && key[i] < mini)
            {
                u = i;
                mini = key[i];
            }
        }
        mst[u] = true;
        for (auto neighbour : adj[u])
        {
            int v = neighbour.first;
            int w = neighbour.second;

            if (!mst[v] && w < key[v])
            {
                parent[v] = u;
                key[v] = w;
            }
        }

        vector<pair<pair<int, int>, int>> ans;
        for (int i = 2; i <= n; i++)
        {
            ans.push_back({{parent[i], i}, key[i]});
        }
    }

    bool cmp(vector<int> &a,vector<int> &b){
        return a[2]<b[2];
    }

    int findParent(vector<int> &parent,int node){
        if(parent[node]==node){
            return node;
        }
        return parent[node]=findParent(parent,parent[node]);
    }

    void unionSet(int u,int v,vector<int> &parent,vector<int> &rank){
        u = findParent(parent,u);
        v = findParent(parent,v);

        if(rank[u]<rank[v]){
            parent[u]=v;
        }
        else if(rank[u]>rank[v]){
            parent[v]=u;
        }
        else{
            parent[v]=u;
            rank[u]++;
        }
    }

    void minSpanTreeKruskalAlgo(int source){
        sort(edge.begin(),edge.end(),cmp);

        int n = edge.size();
        vector<int> parent(n);
        vector<int> rank(n);

        for(int i=1;i<=n;i++){
            parent[i]=i;
            rank[i]=-1;
        }
        int minWeight = 0;

        for(int i=1;i<=n;i++){

            int u = findParent(parent,edge[i][0]);
            int v = findParent(parent,edge[i][1]);
            int w = edge[i][2];

            if(u!=v){
                minWeight+=w;
                unionSet(u,v,parent,rank);
            }
        }
    }
};

int main()
{
    graph g;

    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 8);
    g.addEdge(1, 2, 9);
    g.addEdge(1, 3, 2);
    g.addEdge(3, 2, 6);

    g.printAdj();
}