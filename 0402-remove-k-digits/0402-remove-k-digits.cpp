class Solution {
public:
    string removeKdigits(string num, int k) {
        list<char>ls;
        for(int i=0;i<num.size();i++){
            while(!ls.empty() && k>0 && (num[i]-'0') <(ls.back()-'0')){
                ls.pop_back();
                k--;
            }
            ls.push_back(num[i]);
        }
        while(k!=0){
            ls.pop_back();
            k--;
        }
        if(ls.empty()) return "0";
        string ans;
        list<char>::iterator it=ls.begin();
        while(it!=ls.end()){
            if(*it=='0' && ans.empty()) it++;
            else{
                ans+=*it;
                it++;
            }
        }
        if(ans.empty()) return "0";
        return ans;
        
    }
};