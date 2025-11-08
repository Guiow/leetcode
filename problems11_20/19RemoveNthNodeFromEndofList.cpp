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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* f = head;
        ListNode* l = head;

        for (n; n > 0; n--)
            f = f->next;

        if (f == nullptr)
            return head->next;
            
        for(l,f; f->next != nullptr; l = l->next, f = f->next);
        l-> next = l->next->next;
        return head;
    }
};