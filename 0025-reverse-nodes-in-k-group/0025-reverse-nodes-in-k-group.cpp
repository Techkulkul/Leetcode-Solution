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
    ListNode* getKthNode(ListNode* head,int k)
    {
        k-=1;
        while(head!=NULL && k>0)
        {
            k--;
            head=head->next;
        }
        return head;
    }
    void reverse(ListNode* head)
    {
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* front=NULL;
        while(temp!=NULL)
        {
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevNode=NULL;
        ListNode* nextNode=NULL;
        ListNode* kthNode=NULL;
        while(temp!=NULL)
        {
            kthNode=getKthNode(temp,k);
            if(kthNode==NULL)
            {
                if(prevNode) prevNode->next=temp;
                break;
            }
            nextNode=kthNode->next;
            kthNode->next=NULL;
            reverse(temp);
            if(temp==head)
            {
                head=kthNode;
            }
            else prevNode->next=kthNode;
            prevNode=temp;
            temp=nextNode;
        }
        return head;
        
    }
};