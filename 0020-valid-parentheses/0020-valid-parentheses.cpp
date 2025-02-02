class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int>mpp;
        stack<int>st;
        mpp['(']=1;
        mpp[')']=-1;
        mpp['{']=2;
        mpp['}']=-2;
        mpp['[']=3;
        mpp[']']=-3;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty()){
                st.push(mpp[s[i]]);
            }
            else{
                if(st.top()==-mpp[s[i]] && mpp[s[i]]<0) st.pop();
                else st.push(mpp[s[i]]);
            }
        }
        return st.empty()?true:false;

        
    }
};