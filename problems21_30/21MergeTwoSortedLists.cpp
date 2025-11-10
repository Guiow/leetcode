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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* n = new ListNode();
        ListNode* h = n;

        while(list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                n -> next = new ListNode(list1 -> val);
                list1 = list1 -> next;
            }
            else {
                n -> next = new ListNode(list2 -> val);
                list2 = list2 -> next;
            }
            n = n -> next;
        }

        n -> next = list1 ? list1 : list2;
        
        return h -> next;
    }
};