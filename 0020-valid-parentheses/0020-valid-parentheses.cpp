class Solution {
public:
    bool isValid(string s) {
        stack<char>hash;
        if(s.length()==0 || s.length()==1) return false;
        for(auto c:s){
            if(c=='('||c=='{'|| c=='[') hash.push(c);
            else if(c==')'){
                if(!hash.empty() && hash.top()=='(') hash.pop();
                else return false;
            }
            else if(c=='}'){
                if(!hash.empty() && hash.top()=='{') hash.pop();
                else return false;
            }
            else if(c==']'){
                if(!hash.empty() && hash.top()=='[') hash.pop();
                else return false;
            }
        }
        if(hash.empty()) return true;
        return false;
    }
};