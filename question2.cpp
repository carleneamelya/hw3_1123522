// name: Carlene 李佳玲
// student ID: 1123522
// date of submission：　12/12/2024

#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include <string>

using namespace std;

// Function to perform BFS traversal
vector<int> bfsTraversal(const vector<vector<int>>& adj) {
    vector<int> bfs;                  // To store BFS  result
    int V = adj.size();               // Number of vertices in the graph
    vector<bool> visited(V, false);   // To track which nodes have been visited
    queue<int> q;                     // Queue to manage nodes to visit

    // Start BFS from vertex 0
    q.push(0);
    visited[0] = true; // Mark vertex 0 as visited

    // Continue BFS until there are no more nodes to visit
    while (!q.empty()) {
        int node = q.front();         // Get the node at the front of the queue
        q.pop();                      // Remove the node from the queue
        bfs.push_back(node);          // Add the node to the result list

        // Visit all neighbors of the current node
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) { // If neighbor hasn't been visited
                visited[neighbor] = true;   // Mark it as visited
                q.push(neighbor);           // Add it to the queue for future visits
            }
        }
    }

    return bfs; // Return the BFS traversal result
}

int main() {
    int V;  // Number of vertices in graph
    cout << "Enter the number of vertices: ";
    cin >> V;

    vector<vector<int>> adj(V);   // Create an adjacency list to represent the graph
    cin.ignore();  // Ignore the newline after reading the number of vertices

    // Input the adjacency list for each vertex
    cout << "Enter the adjacency list for each vertex, separated by spaces:" << endl;

    // Reading the adjacency list for each vertex
    for (int i = 0; i < V; ++i) {
        string input;
        cout << "Enter neighbors for vertex " << i << ": ";
        getline(cin, input);  // Read the neighbors of the current vertex

        // Parse the input string to build the adjacency list
        stringstream ss(input); // Use a stringstream to split input by spaces
        int neighbor;
        vector<int> neighbors;
        while (ss >> neighbor) {  // Read each space-separated neighbor
            neighbors.push_back(neighbor);  // Add neighbor to the list
        }
        adj[i] = neighbors;  // Store the neighbors for vertex i in the adjacency list
    }

    // Perform BFS traversal and get the result
    vector<int> result = bfsTraversal(adj);

    // Output the BFS traversal result
    cout << "BFS Traversal: ";
    for (int node : result) {
        cout << node << " "; // Print each node in the traversal
    }
    cout << endl;

    return 0;
}
