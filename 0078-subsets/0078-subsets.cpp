class Solution {
public:
    void subsetsGenerator(int i,vector<int>&temp,vector<int>nums,vector<vector<int>>&ans)
    {
        if(i==nums.size())
        {
            ans.push_back(temp);
            return;

        }
        temp.push_back(nums[i]);
        subsetsGenerator(i+1,temp,nums,ans);
        temp.pop_back();
        subsetsGenerator(i+1,temp,nums,ans);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>ans;
       vector<int>temp;
       subsetsGenerator(0,temp,nums,ans);
       return ans;
        
    }
};