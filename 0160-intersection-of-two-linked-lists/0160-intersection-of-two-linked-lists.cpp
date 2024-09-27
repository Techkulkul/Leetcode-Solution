/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* collisionPoint(ListNode* t1,ListNode* t2,int d)
    {                                              //Better solution
        while(d)
        {
            d--;
            t2=t2->next;
        }
        while(t1!=t2)
        {
            t1=t1->next;
            t2=t2->next;
        }
        return t1;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      ListNode* temp1=headA;
      ListNode* temp2=headB;
      int cnt1=0,cnt2=0;
      while(temp1!=NULL || temp2!=NULL)
      {
        if(temp1)
        {
            cnt1++;
            temp1=temp1->next;
        }
        if(temp2)
        {
            cnt2++;
            temp2=temp2->next;
        }
      }
      temp1=headA;
      temp2=headB;
      if(cnt1<cnt2)
      {
        return collisionPoint(temp1,temp2,cnt2-cnt1);
      }
      else return collisionPoint(temp2,temp1,cnt1-cnt2);
      return NULL;

    }
};