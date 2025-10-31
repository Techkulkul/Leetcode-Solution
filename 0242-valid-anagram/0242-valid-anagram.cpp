class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int>hash;
        for(auto el:s){
            hash[el]++;
        }
        for(auto el:t){
            if(hash.find(el)==hash.end()) return false;
            hash[el]--;
        }
        for(auto it:hash){
            if(it.second>0) return false;
        }
        return true;
    }
};