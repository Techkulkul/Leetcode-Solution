class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int>hash(256,-1);
        int l=0,r=0;
        int length=0;
        while(r<s.length()){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;

                }
            }
            length=max(length,r-l+1);
            hash[s[r]]=r;
            r++;
        }
        return length;

    }
};