class Solution {
public:
    string removeKdigits(string num, int k) {
        list<char>ls;
        string ans="";
        if(num.size()==k) return "0";
        for(int i=0;i<num.size();i++){
            if(ls.empty() || num[i]>=ls.back()) ls.push_back(num[i]);
            else{
                while(!ls.empty()&& k>0 && num[i]<ls.back()){
                    ls.pop_back();
                    k--;
                }
                ls.push_back(num[i]);
            }
        }
        while(k!=0){
            ls.pop_back();
            k--;
        }
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