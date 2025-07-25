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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyNode=new ListNode(-1);
        ListNode* current=dummyNode;
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val<=list2->val)
            {
                current->next=list1;
                current=list1;
                list1=list1->next;
            }
            else
            {
                current->next=list2;
                current=list2;
                list2=list2->next;   
            }
        }
        if(list1)
        {
           current->next=list1;
        }
        if(list2)
        {
            current->next=list2;
        }
        return dummyNode->next;
        
    }
};