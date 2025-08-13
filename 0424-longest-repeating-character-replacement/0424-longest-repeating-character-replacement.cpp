class Solution {
public:
    int characterReplacement(string s, int k) {
        //better solution
        int l=0,r=0,maxLength=0,maxFrequency=0;
        vector<int>hash(26,0);
        while(r<s.length()){
            hash[s[r]-'A']++;
            maxFrequency=max(maxFrequency,hash[s[r]-'A']);
            while(r-l+1-maxFrequency>k){
                hash[s[l]-'A']--;
                maxFrequency=0;
                for(int i=0;i<26;i++) maxFrequency=max(maxFrequency,hash[i]);
                l++;
            }
            if(r-l+1-maxFrequency<=k) maxLength=max(maxLength,r-l+1);
            r++;
        }
        return maxLength;
        
    }
};