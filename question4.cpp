// name: Carlene 李佳玲
// student ID: 1123522
// date of submission：　12/12/2024

#include <iostream>
#include <vector>
#include <queue>
#include <climits>  // For INT_MAX

using namespace std;

// Function to find the MST using Prim's Algorithm
int primMST(const vector<vector<pair<int, int>>>& adj, int V) {
    // Priority queue to store vertices and edge weights, with the smallest weight being extracted first
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    vector<bool> visited(V, false);  // To track visited vertices
    int mstWeight = 0;  // Variable to store the total weight of the MST

    // Start from vertex 0 (arbitrary starting point)
    pq.push({0, 0});  // {weight, vertex}
    
    while (!pq.empty()) {
        int u = pq.top().second;  // Get the vertex with the minimum edge weight
        int weight = pq.top().first;  // Get the edge weight
        pq.pop();
        
        // If the vertex is already visited, skip it
        if (visited[u]) {
            continue;
        }
        
        visited[u] = true;  // Mark the current vertex as visited
        mstWeight += weight;  // Add the weight of the edge to the MST total

        // Traverse the neighbors of the current vertex
        for (const auto& neighbor : adj[u]) {
            int v = neighbor.first;  // Neighbor vertex
            int edgeWeight = neighbor.second;  // Edge weight
            
            // If the neighbor is not visited, add it to the priority queue
            if (!visited[v]) {
                pq.push({edgeWeight, v});
            }
        }
    }

    return mstWeight;  // Return the total weight of the MST
}

int main() {
    int V = 3;  // Number of vertices
    int E = 3;  // Number of edges

    // Create an adjacency list to represent the graph
    vector<vector<pair<int, int>>> adj(V);

    // Add the edges to the adjacency list
    adj[0].push_back({1, 10});  // Edge between 1 and 2 with weight 10
    adj[1].push_back({0, 10});  // Edge between 2 and 1 with weight 10
    adj[1].push_back({2, 5});   // Edge between 2 and 3 with weight 5
    adj[2].push_back({1, 5});   // Edge between 3 and 2 with weight 5
    adj[0].push_back({2, 2});   // Edge between 1 and 3 with weight 2
    adj[2].push_back({0, 2});   // Edge between 3 and 1 with weight 2

    // Find the sum of weights in the MST using Prim's Algorithm
    int result = primMST(adj, V);

    // Output the result
    cout << "The sum of the weights of the edges in the MST is: " << result << endl;

    return 0;
}
