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
    void reverse(ListNode* head)
    {
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* front;
        while(temp!=NULL)
        {
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
    }
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        ListNode* prev;
        while(temp!=NULL)
        {
            ListNode* tail=temp->next;
            if(tail==NULL) {prev->next=temp;
            break;}
            ListNode* nextNode=tail->next;
            tail->next=NULL;
            reverse(temp);
            if(temp==head) head=tail;
            else prev->next=tail;
            prev=temp;
            temp=nextNode;
        }
        return head;
        
    }
};