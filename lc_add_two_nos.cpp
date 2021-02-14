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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode stackAnchor(0);
        ListNode* tail = &stackAnchor;

        div_t sum = { 0, 0 };
        while(sum.quot > 0 || l1 || l2)
        {
            if (l1)
            {
                sum.quot += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                sum.quot += l2->val;
                l2 = l2->next;
            }
            sum = div(sum.quot, 10);
            
            tail->next = new ListNode(sum.rem);
            tail = tail->next;
        }

        return stackAnchor.next;
    }
};