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
    int lengthLL(ListNode* head)
    {
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;

    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        int n=lengthLL(head);
        k=k%n;
        if(k==0) return head;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=nullptr)
        {
            k--;
            fast=fast->next;
            if(k==0) break;
        }
        while(fast->next!=nullptr)
        {
            fast=fast->next;
            slow=slow->next;
        }
        fast->next=head;
        head=slow->next;
        slow->next=NULL;
        return head;
        
    }
};