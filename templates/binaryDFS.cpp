/* binary tree: DFS */

/* recursive */
int dfs(TreeNode* root) {
	if (root == nullptr)
		return 0;

	int result = 0;
	// do logic
	dfs(root.left);
	dfs(root.right);
	return result;
}

/* iterative */
int dfs(TreeNode* root) {
	stack<TreeNode*> stack;
	stack.push(root);
	int result = 0;

	while(!stack.empty()) {
		TreeNode* node = stack.top();
		stack.pop();
		// do logic
		if (node->left != nullptr) {
			stack.push(node->left);
		}
		if (node->right != nullptr) {
			stack.push(node->right);
		}
	}
	return result;
}
