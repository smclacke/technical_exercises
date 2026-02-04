/* two pointers: one input, opposite ends */

int fn(vector<int>& arr) {
	int left = 0, right = arr.size() - 1;
	int result = 0;

	while (left < right) {
		// logic for left and right
		if (CONDITION){
			left++;
		} else {
			right--;
		}
	}
	return result;
}