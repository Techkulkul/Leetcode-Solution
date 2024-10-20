class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto c:s)
        {
            mp[c]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
        }
        string ans;
        while(!pq.empty())
        {
            pair<int,char>p=pq.top();
            char c=p.second;
            int no=p.first;
            while(no)
            {
                ans+=c;
                no--;
            }
            pq.pop();
        }
        return ans;

        
    }
};