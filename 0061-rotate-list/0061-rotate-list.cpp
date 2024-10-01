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
    ListNode* findKthNode(ListNode* head,int k)
    {
        while(head)
        {
            k--;
            if(k==0) break;
            head=head->next;
        }
        return head;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0) return head;         // sir solution TC=O(2n) in worst case  SC=O(1);
        ListNode* tail=head;
        int n=1;
        while(tail->next!=NULL)
        {
            n++;
            tail=tail->next;
        }
        k=k%n;
        ListNode* kThNode=findKthNode(head,n-k);
        tail->next=head;
        head=kThNode->next;
        kThNode->next=NULL;
        return head;
    }
};