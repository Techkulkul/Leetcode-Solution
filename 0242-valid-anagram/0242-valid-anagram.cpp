class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        int frequency[300]={0}; 
        for(auto x:s)
        {
            // if(x<'a' && x>'z') {

            // }
            frequency[x]++;
        }
        for(auto x:t)
        {
            if(frequency[x]==0) return false;
            else frequency[x]--;
        }
        // for(int i=0;i<300;i++)
        // {
        //     if(frequency[i]!=0) return false;
        // }
        return true;

        
    }
};