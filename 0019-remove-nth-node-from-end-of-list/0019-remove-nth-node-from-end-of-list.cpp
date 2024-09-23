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
        if(head->next==NULL) return nullptr;
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        int nodeNo=count-n+1;
        if(nodeNo==1)
        {
            temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
            return head;
        }
        nodeNo--;
        temp=head;
        while(temp->next!=nullptr)
        {
            nodeNo--;
            if(nodeNo==0)
            {
                ListNode* deletenode=temp->next;
                temp->next=temp->next->next;
                deletenode->next=NULL;
                delete deletenode;
                break;
            }
            temp=temp->next;
            
        }
        return head;
        
    }
};