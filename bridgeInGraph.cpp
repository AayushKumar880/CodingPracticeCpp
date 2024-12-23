#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    unordered_map<int, set<int>> adj;

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

    void dfs(int node, int parent, int timer, vector<int> &disc,
             vector<int> &low, vector<bool> &visited, vector<vector<int>> &result)
    {
        visited[node] = true;
        disc[node] = low[node] = timer++;
        for (auto neighbour : adj[node])
        {
            if (neighbour == parent)
                continue;
            if (!visited[neighbour])
            {
                dfs(neighbour, node, timer, disc, low, visited, result );
                low[node] = min(low[node], low[neighbour]);
                if (low[neighbour] > disc[node])
                {
                    result.push_back({node, neighbour});
                }
            }
            else
            {
                low[node] = min(low[node], disc[neighbour]);
            }
        }
    }

    void findBridge()
    {
        int n = adj.size();
        vector<bool> visited(n);
        vector<int> disc(n, -1);
        vector<int> low(n, -1);
        int parent = -1;
        int timer = 0;

        vector<vector<int>> result;
        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                dfs(i, parent, timer, disc, low, visited, result);
            }
        }
        cout << endl;
    }
};

int main()
{

    graph g;
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 5);
    g.addEdge(3, 5);
    g.addEdge(5, 4);

    g.printAdj();
}