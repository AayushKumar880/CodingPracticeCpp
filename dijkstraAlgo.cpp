#include <bits/stdc++.h>
using namespace std;


class graph
{
public:
    unordered_map<int, list<pair<int,int>>> adj;

    void addEdge(int u, int v, int weight)
    {
        adj[u].push_back(make_pair(v,weight));
        adj[v].push_back(make_pair(u,weight));
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
                cout << j.first << ", ";
            }
            cout << endl;
        }
    }

    void shortestPath(int source){
        int n = adj.size();
        vector<int> dist(n,INT_MAX);
        dist[source]=0;
        set<pair<int,int>> s;
        s.insert(make_pair(0,source));
        while(!s.empty()){
            auto top = *(s.begin());
            int nodeDist = top.first;
            int topNode = top.second;

            s.erase(s.begin());
            for(auto neighbour: adj[topNode]){
                if(neighbour.second + nodeDist < dist[neighbour.first]){
                    auto record = s.find(make_pair(dist[neighbour.first],neighbour.first));
                    if(record!=s.end()){
                        s.erase(record);
                    }
                    dist[neighbour.first]=neighbour.second + nodeDist;
                    s.insert(make_pair(dist[neighbour.first],neighbour.first));
                }
            }
        }
        for(auto ele:dist){
            cout << ele << ", ";
        }cout << endl;
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

    g.shortestPath(0);
    
}