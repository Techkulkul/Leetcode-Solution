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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* evenHead=head->next;
        ListNode* evenTemp=evenHead;
        ListNode* oddTemp=head;
        while(evenTemp!=NULL && evenTemp->next!=NULL){
            oddTemp->next=evenTemp->next;
            oddTemp=evenTemp->next;
            evenTemp->next=oddTemp->next;
            evenTemp=oddTemp->next;
        }
        oddTemp->next=evenHead;
        return head;
    }
};