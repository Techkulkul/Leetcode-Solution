class Solution {
public:
    void patternMapping(string& s)
    {
        char map[300];
        char start='a';
        for(auto it:s)
        {
            if(map[it]==0)
            {
                map[it]=start;
                start++;
            }
        }
        for(int i=0;i<s.length();i++)
        {
            s[i]=map[s[i]];
        }
       
    }
    bool isIsomorphic(string s, string t) {
        patternMapping(s);
        patternMapping(t);
        if(s.compare(t)==0) return true;
        return false;
        
        
    }
};