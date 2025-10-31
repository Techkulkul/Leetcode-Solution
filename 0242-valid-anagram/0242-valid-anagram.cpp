class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[256]={0};
        for(auto el:s) hash[el]++;
        for(auto el:t) hash[el]--;
        for(int i=0;i<256;i++){
            if(hash[i]!=0) return false;
        }
        return true;
    }
};