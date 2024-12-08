class Solution {
public:
    void findCombination(int ind,vector<int>&nums,vector<int>&temp, vector<vector<int>>&ans)
    {
        if(ind==nums.size())
        {
            // st.insert(temp);
            return;
        }
        for(int i=ind;i<nums.size();i++)
        {
            if(i>ind && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            ans.push_back(temp);
            findCombination(i+1,nums,temp,ans);
            temp.pop_back();
        }
        // temp.push_back(nums[ind]);
        // findCombination(ind+1,nums,temp,st);
        // temp.pop_back();
        // findCombination(ind+1,nums,temp,st);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        // set<vector<int>>st;
        vector<vector<int>>ans;
        vector<int>temp;
        ans.push_back(temp);
        findCombination(0,nums,temp,ans);
        // vector<vector<int>>ans(st.begin(),st.end());
        return ans;
        
    }
};