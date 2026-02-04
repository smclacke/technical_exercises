/* Monotonic increasing stack (same logic to maintain a monotonic queue) */

int fn(vector<int>& arr) {
	stack<integer> stack;
	int result = 0;

	for (int num: arr) {
		// for monotonic decreasing, flip > to <
		while(!stack.empty() && stack.top() > num) {
			// do logic
			stack.pop();
		}
		stack.push(num);
	}
}