class Solution {
public:
    vector<string> stringSequence(string target) {
        string ans="";
        vector<string>v;
        for(int i=0;i<target.length();i++)
        {
            char orig=target[i];
            int no=orig-'a';
            ans+='a';
            v.push_back(ans);
            for(int j=0;j<no;j++)
            {
                ans[i]++;
                v.push_back(ans);
            }
        }
        return v;
    }
};