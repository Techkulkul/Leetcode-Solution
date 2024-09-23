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
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* temp=head;
        ListNode* front;
        while(temp!=NULL)
        {
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
      if(head->next==NULL) return true;  
      ListNode* slow=head;
      ListNode* fast=head;
      ListNode* temp=head;
      while(fast->next!=NULL &&fast->next->next!=NULL)
      {
        slow=slow->next;
        fast=fast->next->next;
      }
      ListNode* newHead=reverse(slow->next);
      ListNode* temp2=newHead;
      while(temp2!=NULL)
      {
        if(temp->val!=temp2->val) return false;
        temp=temp->next;
        temp2=temp2->next;
      }
      slow->next=reverse(newHead);
      return true;
        
    }
};