// name: Carlene 李佳玲
// student ID: 1123522
// date of submission：　12/12/2024

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> createAdjacencyList(int V, vector<pair<int, int>>& edges) {
    // Initialize an empty adjacency list
    vector<vector<int>> adjacencyList(V);

    // Populate the adjacency list
    for (auto& edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }

    // Sort each list for consistent ordering (optional)
    for (auto& neighbors : adjacencyList) {
        sort(neighbors.begin(), neighbors.end());
    }

    return adjacencyList;
}

int main() {
    int V, E;

    // Input number of vertices and edges
    cout << "Enter the number of vertices (V): ";
    cin >> V;

    cout << "Enter the number of edges (E): ";
    cin >> E;

    vector<pair<int, int>> edges;

    // Input the edges
    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        edges.emplace_back(u, v);
    }

    // Create the adjacency list
    vector<vector<int>> adjList = createAdjacencyList(V, edges);

    // Print the adjacency list
    cout << "Adjacency List:" << endl;
    for (int i = 0; i < adjList.size(); ++i) {
        cout << i << ": ";
        for (int neighbor : adjList[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}
