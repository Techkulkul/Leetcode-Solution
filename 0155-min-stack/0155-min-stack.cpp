class MinStack {
public:
    stack<long long>st;
    long long mini;
    MinStack() {
        mini=LLONG_MAX;
    }
    
    void push(int val) {
        long long val1=val;
        if(st.empty()){
            st.push(val1);
            mini=val1;
        }
        else{
            if(val1>mini) st.push(val1);
            else{
                st.push(2*val1-mini);
                mini=val1;
            }
        }
    }
    
    void pop() {
        if(st.empty()) return;
        long long val=st.top();
        st.pop();
        if(val<mini) mini=2*mini-val;
    }
    
    int top() {
        if(st.empty()) return -1;
        long long val=st.top();
        if(val<mini) return (int)mini;
        return (int)val;
    }
    
    int getMin() {
        return (int)mini;
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