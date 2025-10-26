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
        ListNode* st = l1;
        ListNode* pre;
        int c = 0;
        int s = 0;
  
        while (l1 && l2) {
            s = l1 -> val + l2 -> val + c;
            c = s / 10;
            l1 -> val = s % 10;
            pre = l1;
            l1 = l1 -> next;
            l2 = l2 -> next;
        }

        if (l2) 
            pre -> next = l2;

        if (c && !pre -> next)
            pre -> next = new ListNode(1);
        
        else {
            pre = pre -> next;
            while(pre) {
                s = c + pre -> val;
                if (s < 10) {
                    pre -> val = s;
                    break;
                }
                else {
                    if (pre -> next) {
                        pre -> val = 0;
                        pre = pre -> next;
                    }
                    else 
                        pre -> next = new ListNode(0);
                }
            }   
        }

        return st;
    }
};