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
    bool hasCycle(ListNode* head) {
        ListNode* curr = head;
        std::vector<ListNode*> v(0);

        while(curr != nullptr){
            if(std::find(v.begin(), v.end(), curr) != v.end()){
                return true;
            } else {
                v.push_back(curr);
                curr = curr->next;
            }
        }
        return false;
    }
};
