class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxLength=0;
        for(int i=0;i<n;i++){
            vector<int>hash(256,0);
            string subString="";
            for(int j=i;j<n;j++){
                subString+=s[j];
                if(hash[s[j]]!=0){
                    break;
                }
                maxLength=max(maxLength,j-i+1);
                hash[s[j]]=1;
                
            }
        }
        return maxLength;
        
    }
};