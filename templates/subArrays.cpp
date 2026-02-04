/* find number of subarrays that fit an exact criteria */

int fn(vector<int>& arr, int k) {
	int result = 0;
	unordered_map<int, int> counts;
	counts[0] = 1;
	int curr = 0;

	for(int num: arr) {
		// do logic to change curr
		result += counts[curr - k];
		counts[curr]++;
	}
	return result;
}