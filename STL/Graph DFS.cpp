#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void dfs(vector<vector<int>>& graph, vector<bool>& visited, int startNode) {
    stack<int> s;
    s.push(startNode);

    while (!s.empty()) {
        int currentNode = s.top();
        s.pop();

        if (!visited[currentNode]) {
            visited[currentNode] = true;
            cout << currentNode << " "; // Do whatever operation you want with the node

            // Traverse adjacent nodes
            for (int i = 0; i < graph[currentNode].size(); ++i) {
                int nextNode = graph[currentNode][i];
                if (!visited[nextNode]) {
                    s.push(nextNode);
                }
            }
        }
    }
}

int main() {
    int numNodes, numEdges;
    cout << "Enter the number of nodes and edges: ";
    cin >> numNodes >> numEdges;

    vector<vector<int>> graph(numNodes); // Adjacency list representation
    vector<bool> visited(numNodes, false);

    cout << "Enter the edges (format: u v):\n";
    for (int i = 0; i < numEdges; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // For undirected graph
    }

    cout << "DFS traversal starting from node 0: ";
    dfs(graph, visited, 0);

    return 0;
}
