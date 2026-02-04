/* backtracking */

int backtrack(STATE curr, OTHER_ARGS...) {
	if (BASE_CASE) {
		// modify answer
		return 0;
	}
	int result = 0;
	for (ITERATE_OVER_INPUT) {
		// modify current state
		result += backtrack(curr, OTHER_ARGS...);
		// undo modification of current state
	}
	return result;
}