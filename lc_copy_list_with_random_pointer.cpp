/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if (!head) return head;

        Node* curr = head, *temp;
        while (curr) {
            temp = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = temp;
            curr = temp;
        }

        curr = head;
        while (curr) {
            curr->next->random = curr->random ? curr->random->next : curr->random;
            curr = curr->next->next;
        }

        Node* original = head , *newhead = head->next;
        curr = newhead;

        while (original && curr) {
            original->next = original->next->next;
            curr->next = curr->next ? curr->next->next : curr->next;
            original = original->next;
            curr = curr->next;

        }
        return newhead;
    }
};