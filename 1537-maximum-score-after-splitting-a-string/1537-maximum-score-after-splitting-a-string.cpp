class Solution {
public:
    int maxScore(string s) {
        int ones=count(s.begin(),s.end(),'1');
        int zero=0,ans=0;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='1') ones--;
            else zero++;
            ans=max(ans,ones+zero);
        }
        return ans;
    }
};