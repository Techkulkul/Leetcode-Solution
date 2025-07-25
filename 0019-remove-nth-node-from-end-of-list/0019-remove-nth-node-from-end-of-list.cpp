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
       if(head->next==NULL) return NULL;
       ListNode* fast=head;
       ListNode* slow=head;
       for(int i=0;i<n;i++){
        fast=fast->next;
       }
       if(fast==NULL)
       {
        ListNode* temp=head;
        head=head->next;
        delete temp;
        return head;
       }
       while(fast->next!=nullptr)
       {
        fast=fast->next;
        slow=slow->next;
       }
       ListNode* delNode=slow->next;
       slow->next=slow->next->next;
       delete delNode;
       return head;
        
    }
};