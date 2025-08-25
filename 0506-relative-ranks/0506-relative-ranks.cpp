

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>maxheap;
        int n=score.size();
        for(int i=0;i<n;i++){
            maxheap.push({score[i],i});
        }
        vector<string>ans(n,"");
        int count=0;
        while(!maxheap.empty()){
            count++;
            if(count==1) ans[maxheap.top().second]="Gold Medal";
            else if(count==2) ans[maxheap.top().second]="Silver Medal";
            else if(count==3) ans[maxheap.top().second]="Bronze Medal";
            else ans[maxheap.top().second]=to_string(count);
            maxheap.pop();
        }
        return ans;

    }
};