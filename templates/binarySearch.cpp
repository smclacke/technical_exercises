/* binary search */

int binarySearch(vector<int>& arr, int target) {
	int left = 0;
	int right = int(arr.size()) - 1;
	
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == target) {
			// do something
			return mid;
		}
		if (arr[mid] > target) {
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	// left is insertion point
	return left;
}

/* duplicate elements, left-most insertion point */
int binarySearch(vector<int>& arr, int target) {
	int left = 0;
	int right = arr.size();

	while (left < right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] >= target) {
			right = mid;
		} else {
			left = mid + 1;
		}
	}
	return left;
}

/* duplicate elements, right-most insertion point */
int binarySearch(vector<int>& arr, int target) {
	int left = 0;
	int right = arr.size();

	while (left < right) {
		int mid = left + (right - left) / 2;
		if (arr[mid] > target) {
			right = mid;
		} else {
			left = mid + 1;
		}
	}
	return left;
}

/* for greedy problems -> minimum */
int fn(vector<int>& arr) {
    int left = MINIMUM_POSSIBLE_ANSWER;
    int right = MAXIMUM_POSSIBLE_ANSWER;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (check(mid)) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

bool check(int x) {
    // this function is implemented depending on the problem
    return BOOLEAN;
}

/* for greedy problems -> maximum */
int fn(vector<int>& arr) {
    int left = MINIMUM_POSSIBLE_ANSWER;
    int right = MAXIMUM_POSSIBLE_ANSWER;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (check(mid)) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return right;
}

bool check(int x) {
    // this function is implemented depending on the problem
    return BOOLEAN;
}
