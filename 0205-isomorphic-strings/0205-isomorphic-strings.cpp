class Solution {
public:
    void pattern(string& s){
        int hash[256]={0};
        char start='a';
        for(auto el:s){
            if(hash[el]==0){
                hash[el]=start;
                start++;            
                }
        }
        for(int i=0;i<s.length();i++){
            s[i]=hash[s[i]];
        }
    }
    bool isIsomorphic(string s, string t) {
        pattern(s);
        pattern(t);
        return s.compare(t)==0?true:false;
    }
};