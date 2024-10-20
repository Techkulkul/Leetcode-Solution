class Solution {
public:
    string reverseWords(string s) {
        string ans;
        if(s.length()==0) return "";
        while(s[0]==' ')
        {
            s.erase(0,1);
        }
        int i=s.length()-1;
        while(i>=0)
        {
            while(i>=0 && s[i]==' ')
            {
                i--;
            }
            int len=0;
            while(i>=0 && isalnum(s[i]))
            {
                len++;
                i--;
            }
            ans+=s.substr(i+1,len);
            ans+=' ';

        }        
        ans=ans.erase(ans.length()-1);
        return ans;
    }
};