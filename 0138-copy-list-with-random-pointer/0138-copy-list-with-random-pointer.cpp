/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insertCopyInBetween(Node* head)
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            Node* copyNode=new Node(temp->val);
            copyNode->next=temp->next;
            temp->next=copyNode;
            temp=temp->next->next;
        }
    }
    void connectRandomPointer(Node* head)
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            Node* copyNode=temp->next;
            if(temp->random) copyNode->random=temp->random->next;
            else copyNode->random=NULL;
            temp=temp->next->next;
        }
    }
    Node* getDeepCopy(Node* head)
    {
        Node* dummyNode=new Node(-1);
        Node* current=dummyNode;
        Node* temp=head;
        while(temp!=NULL)
        {
            current->next=temp->next;
            current=current->next;
            temp->next=temp->next->next;
            temp=temp->next;
        }
        return dummyNode->next;
    }
    Node* copyRandomList(Node* head) {
        insertCopyInBetween(head);       //optimal solution TC=O(3n) SC=O(1)+O(n)this for returning answer
        connectRandomPointer(head);
        return getDeepCopy(head);
        
    }
};