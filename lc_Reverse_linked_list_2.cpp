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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode *slow = &dummy;
        n -= m;
        while (--m)
            slow = slow->next;
        ListNode *fast = slow->next, *tmp;
        while (n--) {
            tmp = fast->next;
            fast->next = fast->next->next;
            tmp->next = slow->next;
            slow->next = tmp;
        }
        return dummy.next;
    }
};
