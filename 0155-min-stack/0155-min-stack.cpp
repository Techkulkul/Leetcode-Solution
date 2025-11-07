class MinStack {
public:
    map<int,int>hash;
    stack<int>st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        hash[val]++;
    }
    
    void pop() {
        int val=st.top();
        st.pop();
        hash[val]--;
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        for(auto it:hash){
            if(it.second!=0) return it.first;
        }
        return 1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */