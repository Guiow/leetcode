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

 #include<stack>

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        stack<int> s;
        ListNode* res = new ListNode;
        ListNode* st = res;
        int c = 1;

        for (ListNode* n = head; n != nullptr; n = n -> next, c++) {
            s.push(n -> val);
            if (c % k == 0) {
                while(!s.empty())
                {
                    res -> next = new ListNode(s.top());
                    res = res -> next;
                    s.pop();
                }
            }
        }

        if (!s.empty()) {
            stack<int> sr;
 
            while (!s.empty()) {
                sr.push(s.top());
                s.pop();
            }

            while (!sr.empty()) {
                res -> next = new ListNode(sr.top());
                res = res -> next;
                sr.pop();
            }
        }

        return st -> next;
    }
};