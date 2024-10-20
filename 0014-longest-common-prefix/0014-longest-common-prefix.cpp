class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string v="";
        int i=0;
        string ref=strs[0];
        while(i<ref.length())
        {
            for(int j=1;j<strs.size();j++)
            {
                string temp=strs[j];
                if(ref[i]!=temp[i])
                {
                    return v;
                }
                
            }
            v.push_back(ref[i]);
            i++;
        }
        return v;
        
    }
};