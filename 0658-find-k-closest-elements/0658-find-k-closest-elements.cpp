class Comparator{
    public:
    bool operator()(pair<int,int>a,pair<int,int>b){
        if(a.first==b.first) return a.second>b.second;
        return a.first>b.first;
    }
};
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,Comparator>minheap;
        for(auto i:arr){
            minheap.push({abs(i-x),i});
        }
        while(k>0){
            ans.push_back(minheap.top().second);
            minheap.pop();
            k--;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};