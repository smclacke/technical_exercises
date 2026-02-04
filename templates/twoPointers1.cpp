/* two pointers: two inputs, exhaust both */

int fn(vector<int>& arr1, vector<int>& arr2) {
	int i = 0, j = 0;
	int result = 0;

	while (i < arr1.size() && j < arr2.size()) {
		// logic for arr1[i] and arr2[j]
		if (CONDITION){
			i++;
		} else {
			j++;
		}
	}
	while (i < arr1.size()) {
		// logic for remaining arr1[i]
		i++;
	}
	while (j < arr2.size()) {
		// logic for remaining arr2[j]
		j++;
	}
	return result;
}