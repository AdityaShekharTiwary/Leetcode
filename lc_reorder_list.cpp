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

    ListNode* getMid(ListNode* head) {
        ListNode *slow = head, *fast = head->next;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* tmp = slow->next;
        slow->next = NULL;
        return tmp;
    }

    ListNode* reverse(ListNode* head) {
        ListNode *prev = NULL, *curr = head, *next = NULL;

        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void mergeList(ListNode* head1 , ListNode *mid) {
        ListNode* temp;
        while (mid) {
            temp = head1->next;
            head1->next = mid;
            mid = mid->next;
            head1 = head1->next;
            head1->next = temp;
            head1 = head1->next;
        }

    }

    void reorderList(ListNode* head) {
        if (!head || !head->next) return ;
        ListNode* head1 = head;
        ListNode* mid = getMid(head);
        mid = reverse(mid);
        mergeList(head1, mid);
    }
};