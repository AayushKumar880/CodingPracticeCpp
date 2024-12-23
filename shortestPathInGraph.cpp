#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    unordered_map<int, set<int>> adj;

    void addEdge(int u, int v)
    {
        adj[u].insert(v);
        adj[v].insert(u);
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

    void bfs(int start, int destination)
    {
        vector<int> ans;
        vector<bool> visited(adj.size());
        vector<int> parent(adj.size());

        queue<int> q;
        visited[start] = true;
        parent[start] = -1;
        q.push(start);

        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();

            for (auto neighbour : adj[frontNode])
            {
                if (!visited[neighbour])
                {
                    visited[neighbour] = true;
                    parent[neighbour] = frontNode;
                    q.push(neighbour);
                }
            }
        }

        ans.push_back(destination);
        while (destination != start)
        {
            destination = parent[destination];
            ans.push_back(destination);
        }
        reverse(ans.begin(), ans.end());
        for (int ele : ans)
        {
            cout << ele << ", ";
        }
        cout << endl;
    }
};

int main()
{

    graph g;
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);
    g.addEdge(3, 8);
    g.addEdge(4, 6);
    g.addEdge(5, 8);
    g.addEdge(6, 7);
    g.addEdge(7, 8);

    g.printAdj();
    g.bfs(1, 8);
}