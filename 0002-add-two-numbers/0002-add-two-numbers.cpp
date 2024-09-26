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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* templ1=l1;
        ListNode* prevl1=nullptr;
        ListNode* templ2=l2;
        ListNode* prevl2=NULL;
        int sum=0;
        int carry=0;
        while(templ1!=NULL && templ2!=NULL)
        {
            sum=templ1->val+templ2->val+carry;
            templ1->val=templ2->val=sum%10;
            carry=sum/10;
            prevl1=templ1;
            templ1=templ1->next;
            prevl2=templ2;
            templ2=templ2->next;
        }
        if(templ1)
        {
            if(carry)
            {
                while(templ1!=NULL)
                {
                    sum=templ1->val+carry;
                    templ1->val=sum%10;
                    carry=sum/10;
                    prevl1=templ1;
                    templ1=templ1->next;
                    if(carry==0) break;
                }
                if(carry) prevl1->next=new ListNode(carry);
                return l1;
                
            }
            else return l1;
        }
        else
        {
             if(carry)
            {
                while(templ2!=NULL)
                {
                    sum=templ2->val+carry;
                    templ2->val=sum%10;
                    carry=sum/10;
                    prevl2=templ2;
                    templ2=templ2->next;
                    if(carry==0) break;
                }
                if(carry) prevl2->next=new ListNode(carry);
                return l2;
                
            }
            else return l2;

        }
        return l1;
    }
};