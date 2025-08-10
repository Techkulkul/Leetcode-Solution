class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        list<int>ls;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(!ls.empty() && ls.front()<i-k+1) ls.pop_front();
            while(!ls.empty() && nums[ls.back()]<=nums[i]){
                ls.pop_back();
            }
            ls.push_back(i);
            if(i>=k-1) ans.push_back(nums[ls.front()]);
        }
        return ans;
        
    }
};