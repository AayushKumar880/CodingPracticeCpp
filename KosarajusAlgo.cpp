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
        for (auto nbr : adj[node])
        {
            if (!visited[nbr])
            {
                dfs(nbr, visited, s);
            }
        }
        s.push(node);
    }

    void revDfs(int node, vector<bool> &visited, stack<int> &s,
                unordered_map<int, list<int>> &transpose)
    {
        visited[node] = true;
        for (auto nbr : adj[node])
        {
            if (!visited[nbr])
            {
                revDfs(nbr, visited, s, transpose);
            }
        }
    }

    int findStronglyConnected()
    {
        int n = adj.size();
        vector<bool> visited(n);
        stack<int> s;

        // topoSort
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                dfs(i, visited, s);
            }
        }

        unordered_map<int, list<int>> transpose;
        for (int i = 0; i < n; i++)
        {
            visited[i] = false;
            for (auto nbr : adj[i])
            {
                transpose[nbr].push_back(i);
            }
        }

        int count = 0;
        while (!s.empty())
        {
            int top = s.top();
            s.pop();
            if (!visited[top])
            {
                count++;
                revDfs(top, visited, s, transpose);
            }
        }

        return count;
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