class Comparator{
    public:
    bool operator()(pair<int,int>a,pair<int,int>b){
        int distA=pow(a.first,2)+pow(a.second,2);
        int distB=pow(b.first,2)+pow(b.second,2);
        return distA>distB;

    }
};

class Solution {

public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        //optimal
        vector<vector<int>>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,Comparator>minheap;
        for(auto p:points){
            minheap.push({p[0],p[1]});
        }
        while(k>0){
            ans.push_back({minheap.top().first,minheap.top().second});
            minheap.pop();
            k--;
        }
        return ans;
    }
};