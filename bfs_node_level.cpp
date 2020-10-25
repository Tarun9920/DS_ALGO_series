#include <bits/stdc++.h> 
using namespace std; 

void printLevels(vector<int> graph[], int V, int x) 
{ 
	// array to store level of each node 
	int level[V]; 
	bool marked[V]; 
	queue<int> que; 
	que.push(x); 

	level[x] = 0; 

	marked[x] = true; 

	while (!que.empty()) { 

		x = que.front(); 

		que.pop(); 

		for (int i = 0; i < graph[x].size(); i++) { 
			// b is neighbor of node x 
			int b = graph[x][i]; 

			// if b is not marked already 
			if (!marked[b]) { 

				// enqueue b in queue 
				que.push(b); 

				// level of b is level of x + 1 
				level[b] = level[x] + 1; 

				// mark b 
				marked[b] = true; 
			} 
		} 
	} 

	// display all nodes and their levels 
	cout << "Nodes"
		<< " "
		<< "Level" << endl; 
	for (int i = 0; i < V; i++) 
		cout << " " << i << " --> " << level[i] << endl; 
} 

int main() 
{ 
	// adjacency graph for tree 
	int V = 8; 
	vector<int> graph[V]; 

	graph[0].push_back(5); 
	graph[0].push_back(3); 
	graph[1].push_back(2); 
	graph[1].push_back(4); 
	graph[1].push_back(1); 
	graph[2].push_back(8);

	// call levels function with source as 0 
	printLevels(graph, V, 0); 

	return 0; 
} 
