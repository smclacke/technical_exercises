/* graph: BFS */

int fn(vector<vector<int>>& graph) {
	queue<int> queue;
	unordered_set<int> seen;
	queue.push(START_NODE);
	seen.insert(START_NODE);
	int result = 0;

	while (!queue/empty()) {
		int node = queue.front();
		queue.pop();
		// do some logic
		for (int neighbor: graph[node]) {
			if (!seen.contains(neighbor)) {
				seen.insert(neighbor);
				queue.push(neighbor);
			}
		}
	}
}
