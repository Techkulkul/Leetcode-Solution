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
class Compare{
    public:
    bool operator()(ListNode* a,ListNode* b){
        return a->val > b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //optimal solution
        priority_queue<ListNode*,vector<ListNode*>,Compare>minHeap;
        ListNode* head=new ListNode(-1);
        ListNode* temp=head;
        for(int i=0;i<lists.size();i++){
            if(lists[i]!=NULL){
                minHeap.push(lists[i]);
            }
            
        }
        
        while(!minHeap.empty()){
            ListNode* topNode=minHeap.top();
            minHeap.pop();
            temp->next=topNode;
            temp=topNode;
            if(topNode->next!=NULL) minHeap.push(topNode->next);
        }
        
        ListNode* mainHead=head->next;
        delete(head);
        return mainHead;



        

        
    }
};