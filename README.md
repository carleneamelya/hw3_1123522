# Data Structure HW 3
## Carlene 1123522
### Question 1
<br>
Given an undirected graph with V nodes and E edges, create and return an adjacency list of the graph. 0-based indexing is followed everywhere.
<br><br>
Input:
<br>
V = 5, E = 7
<br>
edges = [[0,1], [0,4], [4,1], [4,3], [1,3], [1,2], [3,2]]
<br><br>
Output: 
[[1,4], [0,2,3,4], [1,3], [1,2,4], [0,1,3]]
<br><br>
Explanation:
<br>
Node 0 is connected to 1 and 4.
<br>
Node 1 is connected to 0,2,3 and 4.
<br>
Node 2 is connected to 1 and 3.
<br>
Node 3 is connected to 1,2 and 4.
<br>
Node 4 is connected to 0,1 and 3.

---

Question 2
<br>
Given a connected undirected graph represented by an adjacency list adj, which is a vector of vectors where each adj[i] represents the list of vertices connected to vertex i. Perform a Breadth First Traversal (BFS) starting from vertex 0, visiting vertices from left to right according to the adjacency list, and return a list containing the BFS traversal of the graph.
Note: Do traverse in the same order as they are in the adjacency list.
<br><br>
Input: adj = [[2,3,1], [0], [0,4], [0], [2]]
<br><br>
Output: [0, 2, 3, 1, 4]
<br><br>
Explanation: 
<br>
Starting from 0, the BFS traversal will follow these steps: 
<br>
Visit 0 → Output: 0 
<br>
Visit 2 (first neighbor of 0) → Output: 0, 2 
<br>
Visit 3 (next neighbor of 0) → Output: 0, 2, 3 
<br>
Visit 1 (next neighbor of 0) → Output: 0, 2, 3, 
<br>
Visit 4 (neighbor of 2) → Final Output: 0, 2, 3, 1, 4


