class MinStack {     //Optimise solution  TC=O(1) SC=O(n)
public:
    stack<long long>st;
   long long minVal=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        long long value=val;
        if(st.empty()) {
            st.push(value);
            minVal=value;
        }
        else{
            if(value>=minVal) st.push(value);
            else{
                st.push(2*value-minVal);
                minVal=value;
            }

        }
    }
    
    void pop() {
        long long topElement=st.top();
        st.pop();
        if(topElement<minVal) minVal=2*minVal-topElement; 
        // if(st.empty()) minVal=INT_MAX;
    }
    
    int top() {
        if(st.empty()) return -1;
        else {
            if(st.top()<minVal) return minVal;
            else return st.top();
        }
    }
    
    int getMin() {
        return minVal;
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