/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
	ListNode* reverseKGroup(ListNode* head, int k) {
		if (head == NULL || k == 1) return head;

		ListNode* dummy = new ListNode(0);
		dummy->next = head;

		ListNode* curr = dummy, *prev = dummy, *next = dummy;
		int cnt = 0;
		while (curr->next) {
			curr = curr->next;
			cnt++;
		}

		while (cnt >= k) {
			curr = prev->next;
			next = curr->next;
			for (int i = 1; i < k; i++) {
				curr->next = next->next;
				next->next = prev->next;
				prev->next = next;
				next = curr->next;
			}
			prev = curr;
			cnt -= k;
		}
		return dummy->next;
	}
};