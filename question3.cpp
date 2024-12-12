// name: Carlene 李佳玲
// student ID: 1123522
// date of submission：　12/12/2024

#include <iostream>
#include <vector>
#include <stack>
#include <sstream>  

using namespace std;

// Function to perform DFS traversal
void dfs(int node, const vector<vector<int>>& adj, vector<bool>& visited, vector<int>& result) {
    visited[node] = true;    // Mark the node as visited
    result.push_back(node);  // Add node to the result list

    // Visit all neighbors of the current node
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) { // If the neighbor hasn't been visited
            dfs(neighbor, adj, visited, result);  // Visit the neighbor
        }
    }
}

int main() {
    int V;  // Number of vertices
    cout << "Enter the number of vertices: ";
    cin >> V;

    vector<vector<int>> adj(V);  // Adjacency list for the graph
    cin.ignore();  // Ignore the newline after reading V

    // Input the adjacency list for each vertex
    cout << "Enter the adjacency list for each vertex, separated by spaces:" << endl;

    // Reading the adjacency list for each vertex
    for (int i = 0; i < V; ++i) {
        string input;
        cout << "Enter neighbors for vertex " << i << ": ";
        getline(cin, input);  // Read the input for each vertex

        // Parse the input to get the neighbors
        stringstream ss(input);
        int neighbor;
        while (ss >> neighbor) {  // Read space-separated neighbors
            adj[i].push_back(neighbor);   // Add the neighbor to the adjacency list
        }
    }

    // Vector to store DFS result
    vector<int> result;
    vector<bool> visited(V, false);  // Vector to keep track of visited nodes

    // Perform DFS starting from vertex 0
    dfs(0, adj, visited, result);

    // Output the DFS result
    cout << "DFS Traversal: ";
    for (int node : result) {
        cout << node << " "; // Print each visited node
    }
    cout << endl;

    return 0;
}
