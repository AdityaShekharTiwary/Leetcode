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
    ListNode* swapNodes(ListNode* head, int k) {
        if (!head || !head->next) return head;

        ListNode* fast = head, *slow = head, *temp = NULL;

        while (--k) {
            fast = fast->next;
        }

        temp = fast;
        fast = fast->next;
        while (fast) {
            fast = fast->next;
            slow = slow->next;
        }

        //cout<<temp->val<<" "<<slow->val;

        swap(temp->val, slow->val);
        return head;

    }
};