class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int j=0;
        for(int i=0;i<g.size()&&j<s.size();i++)
        {
            if(g[i]<=s[j])
            {
                count++;
                j++;
            }
            else 
            {
                while(g[i]>s[j] && j+1<s.size())
                {   
                     j++;

                }
                if(j+1==s.size()) return count;
                count++;
                j++;
            }
        }
        return count;
        
    }
};