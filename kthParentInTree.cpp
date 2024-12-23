#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    unordered_map<int, set<int>> adj;
    vector<vector<int>> par;

    void addEdge(int u, int v) {
        adj[u].insert(v);
    }

    void printAdj() {
        for (auto& i : adj) {
            cout << i.first << " -> ";
            for (auto& j : i.second) {
                cout << j << ", ";
            }
            cout << endl;
        }
    }

    void dfs(int node, int parent, vector<bool>& visited, int x) {
        visited[node] = true;
        par[node][0] = parent;
        for (int i = 1; i <= x; i++) {
            if (par[node][i - 1] != -1) {
                par[node][i] = par[par[node][i - 1]][i - 1];
            } else {
                par[node][i] = -1;
            }
        }
        for (auto neighbour : adj[node]) {
            if (!visited[neighbour]) {
                dfs(neighbour, node, visited, x);
            }
        }
    }

    void kthParent(int s, int k) {
        int n = adj.size();
        int x = log2(n) + 1;
        par.resize(n + 1, vector<int>(x + 1, -1));  // Resize and initialize the par vector
        vector<bool> visited(n + 1, false);
        dfs(1, -1, visited, x);  // Assuming 1 is the root node

        // Debugging: print the par table
        cout << "Parent table after DFS:\n";
        for (int i = 1; i <= n; i++) {
            cout << i << ": ";
            for (int j = 0; j <= x; j++) {
                cout << par[i][j] << " ";
            }
            cout << endl;
        }

        for (int j = x; j >= 0; j--) {
            if (k & (1 << j)) {
                s = par[s][j];
                if (s == -1) {
                    cout << "Invalid node" << endl;
                    return;  // If we reach an invalid node, print and return
                }
            }
        }

        cout << "The " << k << "th parent is: " << s << endl;
    }
};

int main() {
    Graph g;
    g.addEdge(1, 2);
    g.addEdge(2, 4);
    g.addEdge(2, 7);
    g.addEdge(4, 5);
    g.addEdge(5, 6);
    g.addEdge(7, 8);
    g.addEdge(8, 9);

    g.printAdj();

    g.kthParent(9, 3);
    return 0;
}
