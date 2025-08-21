class Solution {
public:
    string reorganizeString(string s) {
        vector<int>hash(26,0);
        priority_queue<pair<int,char>>maxheap;
        string ans="";
        for(int i=0;i<s.length();i++) hash[s[i]-'a']++;
        for(int i=0;i<26;i++) {
            if(hash[i]!=0) maxheap.push({hash[i],'a'+i});
        }
        while(maxheap.size()>1){
            auto firstTop=maxheap.top();
            maxheap.pop();
            ans+=firstTop.second;
            firstTop.first--;
            auto secondTop=maxheap.top();
            maxheap.pop();
            ans+=secondTop.second;
            secondTop.first--;
            if(firstTop.first>0) maxheap.push(firstTop);
            if(secondTop.first>0) maxheap.push(secondTop);
            
        }
        if(maxheap.size()==1){
            auto top=maxheap.top();
            maxheap.pop();
            ans+=top.second;
            top.first--;
            if(top.first>0) return "";

        }
        return ans;
    }
};