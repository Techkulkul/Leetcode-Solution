class Solution {
public:
    bool checkPalindrome(string s)
    {
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j]) return false;
            else 
            {
                i++,j--;
            }
        }
        return true;
    }
    void findPartition(string s,int ind,vector<string>&temp,vector<vector<string>>&ans)
    {
        if(ind==s.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=ind;i<s.length();i++)
        {
            string sub=s.substr(ind,i-ind+1);
            if(checkPalindrome(sub))
            {
                temp.push_back(sub);
                findPartition(s,i+1,temp,ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        findPartition(s,0,temp,ans);
        return ans;
        
    }
};