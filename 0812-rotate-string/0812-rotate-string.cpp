class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        if(s.compare(goal)==0) return true;
        int len=s.length();
        for(int i=0;i<len-1;i++)
        {
            char firstChar=s[0];
            for(int j=0;j<len-1;j++)
            {
                s[j]=s[j+1];
            }
            s[len-1]=firstChar;
            if(s.compare(goal)==0) return true;
        }
        return false;
    }
};