class MyStack {
public:
    queue<int> myQueue;
    MyStack() {
        
        
    }
    
    void push(int x) {
        int size=myQueue.size();
        myQueue.push(x);
        for(int i=0;i<size;i++)
        {
            myQueue.push(myQueue.front());
            myQueue.pop();
        }

    }
    
    int pop() {
        if(myQueue.size()==0) return -1;
        int ele=myQueue.front();
        myQueue.pop();
        return ele;
    }
    
    int top() {
        return myQueue.front();
    }
    
    bool empty() {
        return myQueue.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */