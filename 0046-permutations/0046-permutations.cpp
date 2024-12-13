class Solution {
public:
    void findCombination(int ind,vector<int>nums,vector<int>&temp,int hash[],vector<vector<int>>&ans)
    {
        if(ind==nums.size()) 
        {
            ans.push_back(temp);
            return ;       
        }
        for(int i=0;i<nums.size();i++)
        {
            if(hash[i]==0)
            {   
                temp.push_back(nums[i]);
                hash[i]=1;
                findCombination(ind+1,nums,temp,hash,ans);
                temp.pop_back();
                hash[i]=0;
            }

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        int hash[n];
        for(int i=0;i<n;i++)
        {
            hash[i]=0;
        }
        vector<vector<int>>ans;
        vector<int>temp;
        findCombination(0,nums,temp,hash,ans);
        return ans;
        
    }
};