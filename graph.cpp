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

    void bfs()
    {
        vector<int> ans;
        unordered_map<int, bool> visited(adj.size());
        for (int i = 0; i < adj.size(); i++)
        {
            if (!visited[i])
            {
                queue<int> q;
                visited[i] = true;
                q.push(i);
                while (!q.empty())
                {
                    int frontNode = q.front();
                    q.pop();

                    ans.push_back(frontNode);

                    for (auto ele : adj[frontNode])
                    {
                        if (!visited[ele])
                        {
                            q.push(ele);
                            visited[ele] = true;
                        }
                    }
                }
            }
        }
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    void dfs()
    {
        vector<vector<int>> ans;
        unordered_map<int, bool> visited(adj.size());
        for (int i = 0; i < adj.size(); i++)
        {
            if (!visited[i])
            {
                vector<int> component;
                component.push_back(i);
                visited[i] = true;
                for (auto ele : adj[i])
                {
                    if (!visited[ele])
                    {
                        component.push_back(ele);
                        visited[ele] = true;
                    }
                }
                ans.push_back(component);
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            for(auto ele:ans[i]){
                cout << ele << " ";
            }
            cout << endl;
        }
    }
};

int main()
{

    graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(3, 4);

    g.printAdj();

    g.bfs();
    g.dfs();
}