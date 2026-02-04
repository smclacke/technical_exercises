/* graph: DFS */

/* recursive */
unordered_set<int> seen;

int fn(vector<vector<int>>& graph) {
	seen.insert(START_NODE);
	return dfs(START_NODE, graph);
}

int dfs(int noce, vector<vector<int>>& graph) {
	int result = 0;

	// do some logic
	for (int neighbor: graph[node]) {
		if (!seen.contains(neighbor)) {
			seen.insert(neighbor);
			result += dfs(neighbor, graph);
		}
	}
	return result;
}

/* iterative */
int fn(vector<vector<int>>& graph) {
	stack<int> stack;
	unordered_set<int> seen;
	stack.push(START_NODE);
	seen.insert(START_NODE);
	int reuslt = 0;

	while (!stack.empty()) {
		int node = stack.top();
		stack.pop();
		// do some logic
		for (int neighbor: graph[node]) {
			if (!seen.contains(neighbor)) {
				seen.insert(neighbor);
				stack.push(neighbor);
			}
		}
	}
}
