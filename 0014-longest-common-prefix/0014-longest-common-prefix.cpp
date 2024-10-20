class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minLen=INT_MAX;
        for(int i=0;i<strs.size();i++)
        {
            int len=strs[i].length();
            minLen=min(minLen,len);
        }
        string ans="";
        for(int i=0;i<minLen;i++)
        {
            for(int j=1;j<strs.size();j++)
            {
                if(strs[0][i]!=strs[j][i])
                {
                    return ans;
                }
                
            }
            ans+=strs[0][i];
            
        }
        return ans;
       
        
    }
};