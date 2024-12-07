class Solution {
public:
    void findCombination(int ind,vector<int>&nums,vector<int>&temp,set<vector<int>>&st)
    {
        if(ind==nums.size())
        {
            st.insert(temp);
            return;
        }
        // for(int i=ind;i<nums.size();i++)
        // {
        //     if(i>ind && nums[i]==nums[i-1]) continue;
        //     temp.push_back(nums[i]);
        //     findCombination(i+1,nums,temp,ans);
        //     temp.pop_back();
        // }
        temp.push_back(nums[ind]);
        findCombination(ind+1,nums,temp,st);
        temp.pop_back();
        findCombination(ind+1,nums,temp,st);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        set<vector<int>>st;
        vector<int>temp;
        findCombination(0,nums,temp,st);
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
        
    }
};