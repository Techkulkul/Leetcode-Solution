/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int>mpp;
        int i=0;
        while(head!=nullptr)
        {
            if(mpp.find(head)!=mpp.end()) return head;
            mpp[head]=i;
            i++;
            head=head->next;
        }
        return nullptr;
        
    }
};