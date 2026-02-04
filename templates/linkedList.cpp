/* Linked list: fast and slow pointer */

int fn(ListNode* head) {
	int result = 0;
	ListNode* slow = head;
	ListNode* fast = head;

	whiel (fast && fast->next) {
		// do logic
		slow = slow->next;
		fast = fast->next->next;
	}
	return result;
}