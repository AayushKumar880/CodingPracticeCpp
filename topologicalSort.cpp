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

    void dfs(int node, vector<bool> &visited, stack<int> &s)
    {
        visited[node] = true;
        for (auto neighbour : adj[node])
        {
            if (!visited[neighbour])
            {
                dfs(neighbour, visited, s);
            }
        }
        s.push(node);
    }

    void topologicalSortDFS()
    {
        int n = adj.size();
        vector<bool> visited(n);
        stack<int> s;
        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                dfs(i, visited, s);
            }
        }
        while (!s.empty())
        {
            cout << s.top() << ", ";
            s.pop();
        }
        cout << endl;
    }

    void topoSortBFS()
    {
        int n = adj.size();
        vector<int> indegree(n);
        for (auto node : adj)
        {
            for (auto neighbour : node.second)
            {
                indegree[neighbour]++;
            }
        }
        queue<int> q;
        for (int i = 1; i <= n; i++)
        {
            if (!indegree[i])
                q.push(i);
        }

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << ", ";
            for (int neighbour : adj[node])
            {
                indegree[neighbour]--;
                if (!indegree[neighbour])
                    q.push(neighbour);
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

    g.topologicalSortDFS();
}