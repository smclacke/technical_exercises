/* find top k elements with heap */

vector<int> fn(vector<int>& arr, int k) {
	priority_queue<int, CRITERIA> heap;
	for (int num: arr) {
		heap.push(num);
		if (heap.size() > k) {
			heap.pop();
		}
	}
	vector<int> result;
	while (heap.size() > 0) {
		result.push_back(heap.top());
		heap.pop();
	}
	return result;
}
