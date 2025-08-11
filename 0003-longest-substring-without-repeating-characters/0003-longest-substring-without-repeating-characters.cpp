class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //optimal sol
        int n=s.length();
        int left=0,right=0;
        vector<int>hash(256,-1);
        int maxLength=0;
        while(right<n){
            if(hash[s[right]]>=left){
                left=hash[s[right]]+1;

            }
            maxLength=max(maxLength,right-left+1);
            hash[s[right]]=right;
            right++;
        }
        return maxLength;
    }
};