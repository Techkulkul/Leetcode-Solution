class Solution {
public:
    string removeKdigits(string num, int k) {
        //optimal
        int n=num.size();
        if(k==n) return "0";
        list<char>st;
        string ans;
        for(int i=0;i<n;i++){
            while(!st.empty() && k>0 && st.back()>num[i] ){
                st.pop_back();
                k--;
            }
            st.push_back(num[i]);
        }
        while(!st.empty()&& k>0){
            st.pop_back();
            k--;
        }
        if(st.empty()) return "0";

        while(!st.empty() && st.front()=='0') st.pop_front();
        if(st.empty()) return "0";

        for(auto i :st) ans+=i; 
        return ans;

    }
};