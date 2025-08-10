class StockSpanner {
public:
    stack<pair<int,int>>st;
    int  i; //index
    StockSpanner() {
        i=0;
        
    }
    
    int next(int price) {
        while(!st.empty() && st.top().first<=price) st.pop();
        int ans=st.empty()?i-(-1):i-st.top().second;
        st.push({price,i});
        i++;
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */