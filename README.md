# Data Structure HW 3
## Carlene 1123522
### Question 1
Given an undirected graph with V nodes and E edges, create and return an adjacency list of the graph. 0-based indexing is followed everywhere.
<br><br>
Input:
<br>
V = 4, E = 5
<br>
edges = [[0,1], [0,3], [1,2], [1,3], [2,3]]
<br><br>
Output: 
[[1,3], [0,2,3], [1,3], [0,1,2]]
<br><br>
Explanation:
<br>
Node 0 is connected to 1 and 3.
<br>
Node 1 is connected to 0, 2, and 3.
<br>
Node 2 is connected to 1 and 3.
<br>
Node 3 is connected to 0, 1, and 2.

---

### Question 2
<br>
Given a connected undirected graph represented by an adjacency list adj, which is a vector of vectors where each adj[i] represents the list of vertices connected to vertex i. Perform a Breadth First Traversal (BFS) starting from vertex 0, visiting vertices from left to right according to the adjacency list, and return a list containing the BFS traversal of the graph.
Note: Do traverse in the same order as they are in the adjacency list.
<br><br>
Input: adj = [[1,2,3], [0,4], [0,5], [0], [1, 6], [2], [4]]
<br><br>
Output: [0, 1, 2, 3, 4, 5, 6]
<br><br>
Explanation: 
<br>
Starting from 0, the BFS traversal will follow these steps: 
<br>
Visit 0 → Output: 0 
<br>
Visit 1 (first neighbor of 0) → Output: 0, 1
<br>
Visit 2 (next neighbor of 0) → Output: 0, 1, 2
<br>
Visit 3 (next neighbor of 0) → Output: 0, 1, 2, 3
<br>
Visit 4 (neighbor of 1) → Final Output: 0, 1, 2, 3, 4
<br>
Visit 5 (neighbor of 2) → Final Output: 0, 1, 2, 3, 4, 5
<br>
Visit 6 (neighbor of 4) → Final Output: 0, 1, 2, 3, 4, 5, 6

---

### Question: 3
Given a connected undirected graph represented by an adjacency list adj, which is a vector of vectors where each adj[i] represents the list of vertices connected to vertex i. Perform a Depth First Traversal (DFS) starting from vertex 0, visiting vertices from left to right as per the adjacency list, and return a list containing the DFS traversal of the graph.
<br>
Note: Do traverse in the same order as they are in the adjacency list.
<br><br>
Input: adj = [[1, 2], [0, 2], [0, 1, 3, 4], [2], [2]]
<br><br>
Output: [0, 1, 2, 3, 4]
<br><br>
Explanation: 
<br>
Starting from 0, the DFS traversal proceeds as follows: 
<br>
Visit 0 → Output: 0 
<br>
Visit 1 (the first neighbor of 0) → Output: 0, 1 
<br>
Visit 2 (the first neighbor of 1) → Output: 0, 1, 2 
<br>
Visit 3 (the first neighbor of 2) → Output: 0, 1, 2, 3 
<br>
Backtrack to 2 and visit 4 → Final Output: 0, 1, 2, 3, 4

---

### Question 4
Given a weighted, undirected, and connected graph with V vertices and E edges, your task is to find the sum of the weights of the edges in the Minimum Spanning Tree (MST) of the graph. The graph is represented by an adjacency list, where each element adj[i] is a vector containing vector of integers. Each vector represents an edge, with the first integer denoting the endpoint of the edge and the second integer denoting the weight of the edge.
<br><br>
Input:
<br>
V = 3, E = 3
<br>
1 2 2
<br>
1 3 5
<br>
2 3 10
<br>
<br><br>
Output:
<br>
7
<br><br>
Explanation:
<br>
The Spanning Tree resulting in a weight of 7 is shown above.

