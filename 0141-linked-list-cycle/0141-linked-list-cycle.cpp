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
    bool hasCycle(ListNode *head) {
        if(head==NULL) return head;
        unordered_set<ListNode*>hash;
        ListNode* temp=head;
        while(temp && hash.find(temp)==hash.end()){
            hash.insert(temp);
            temp=temp->next;
        }
        return temp?true:false;
    }
};