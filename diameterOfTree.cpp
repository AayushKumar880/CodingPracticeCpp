#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    unordered_map<int, set<int>> adj;
    vector<int> depth, ans;

    void addEdge(int u, int v)
    {
        adj[u].insert(v);
        // adj[v].insert(u);
        // if(!direction){
        //     adj[v].push_back(u);
        // }
    }

    void printAdj()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }

    void dfs(int node, vector<bool> &visited)
    {
        visited[node] = true;
        int m1 = 0, m2 = 0;
        for (auto neighbour : adj[node])
        {
            if (!visited[neighbour])
            {
                int subtreeHeight = 0;
                dfs(neighbour, visited);

                if (depth[neighbour] > m1)
                {
                    m2 = m1;
                    m1 = depth[neighbour];
                }
                else if (depth[neighbour] > m2)
                {
                    m2 = depth[neighbour];
                }
            }
        }

        depth[node]=m1+1;
        ans[node]=m1+m2;
    }

    int diaOfTree()
    {
        int n = adj.size();
        depth.resize(n + 1);
        ans.resize(n + 1);
        vector<bool> visited(n + 1);
        dfs(1, visited);
        int maxDia = 0;
        for(int i=1;i<=n;i++) maxDia = max(maxDia,ans[i]);
        return maxDia;
    }
};

int main()
{

    graph g;
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1,4);
    // g.addEdge(2, 4);
    // g.addEdge(2, 7);
    // g.addEdge(4, 5);
    // g.addEdge(5, 6);
    // g.addEdge(7, 8);
    // g.addEdge(8, 9);

    g.printAdj();
    cout << g.diaOfTree();
}