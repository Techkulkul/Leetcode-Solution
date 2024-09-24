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
    ListNode* deleteMiddle(ListNode* head) { //Brute force
        if(head==NULL|| head->next==NULL) return NULL;
       ListNode* temp=head;
       int count=0;
       while(temp!=NULL)
       {
        count++;
        temp=temp->next;
       }
       int nodeNo=count/2;
       temp=head;
       while(temp!=NULL)
       {
        nodeNo--;
        if(nodeNo==0) break;
        temp=temp->next;
       }
       ListNode* midNode=temp->next;
       temp->next=temp->next->next;
       delete midNode;
       return head;
    }
};