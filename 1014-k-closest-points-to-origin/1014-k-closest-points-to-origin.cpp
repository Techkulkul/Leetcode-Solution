using p = pair<double,pair<int,int>>;

class Compare{
    public:
    bool operator()(p a,p b){
        return a.first>b.first;
    }
};

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        //optimal
        priority_queue<p,vector<p>,Compare>minheap;
        vector<vector<int>> ans;
        for(int i=0;i<points.size();i++){
                double distance=sqrt(pow(points[i][0],2)+pow(points[i][1],2));
                minheap.push({distance,{points[i][0],points[i][1]}});
        }
        while(k>0){
            ans.push_back({minheap.top().second.first,minheap.top().second.second});
            minheap.pop();
            k--;
        }
        return ans;

    }
    
};