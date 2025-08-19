class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //optimal

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap;
        unordered_map<int,int>hash;
        vector<int>ans;
        for(int i=0;i<nums.size();i++) hash[nums[i]]++;
        for(auto it:hash){
            minHeap.push({it.second,it.first});
            if(minHeap.size()>k) minHeap.pop();

        }
        while(!minHeap.empty()){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;


    }
};