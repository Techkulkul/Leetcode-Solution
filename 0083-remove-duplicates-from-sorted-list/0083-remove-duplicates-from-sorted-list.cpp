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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        ListNode* diff;
        while(temp!=NULL)
        {
            diff=temp->next;
            while(diff!=NULL && diff->val==temp->val)
            {
                ListNode* del=diff;
                diff=diff->next;
                delete del;

            }
            temp->next=diff;
            temp=diff;
        }
        return head;
        
    }
};