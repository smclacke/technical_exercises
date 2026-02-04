/* binary tree: BFS */

int fn(TreeNode* root) {
	queue<TreeNode*> queue;
	queue.push(root);
	int result = 0;

	while (!queue.empty()) {
		int currLen = queue.size();
		// do logic for current level

		for (int i = 0; i < currLen; i++) {
			TreeNode* node = queue.front();
			queue.pop();
			// do logic
			if (node->left != nullptr) {
				queue.push(node->left);
			}
			if(node->right != nullptr) {
				queue.push(node->right);
			}
		}
	}
	return result;
}