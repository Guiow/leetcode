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

 #include<map>
 #include<set>

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        map<int, int> m;
        set<int> s;
        int k;

        for (ListNode* list : lists) {
            if (list != nullptr)
                for (ListNode* n = list ; n != nullptr; n = n -> next) {
                    k = n -> val;
                    s.insert(k);
                    if (m.find(k) == m.end())
                        m[k] = 1;
                    else
                        m[k]++;
                }
        }

        ListNode* res = new ListNode;
        ListNode* st = res;
        for (int a : s) {
            for (int i = m[a]; i > 0; i--) {
                res -> next = new ListNode(a);
                res = res -> next;
            }
        }

        return st -> next;
    }
};