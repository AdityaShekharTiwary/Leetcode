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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *temp = new ListNode(0);
        temp->next = head;
        ListNode *curr = head, *prev = temp;

        while (curr && curr->next) {
            prev->next = curr->next;
            prev = prev->next;
            curr->next = prev->next;
            prev->next = curr;
            prev = curr;
            curr = curr->next;
        }
        return temp->next;
    }
};