/* build a trie (use class only if want to store data at each node otherwise just use hash maps) */

struct TrieNode {
	int data;
	unordered_map<char, TrieNode*> children;
	TrieNode() : data(0), children(unordered_map<char, TrieNode*>()) {}
};

TrieNode* buildTrie(vector<string> words) {
	TrieNode* root = new TrieNode();
	for (string word: words) {
		TrieNode* curr = root;
		for (char c: word) {
			if (!curr->children.contains(c)) {
				curr->children[c] = new TrieNode();
			}
			curr = curr->children[c];
		}
		// have full word at curr now
		// can perform mor elogic to give curr attribute if needed
	}
	return root;
}