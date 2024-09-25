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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        unordered_set<ListNode*>ls;
        while(temp!=NULL)
        {
            ls.insert(temp);
            temp=temp->next;
        }
        temp=headB;
        while(temp!=NULL)
        {
            if(ls.find(temp)!=ls.end()) return temp;
            temp=temp->next;
        }
        return NULL;
        
    }
};