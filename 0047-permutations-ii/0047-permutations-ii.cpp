class Solution {
public:
    void findCombination(int ind,vector<int>&temp,vector<int>&nums,vector<int> &hash,set<vector<int>>&st)
    {
        if(ind==nums.size())
        {
            st.insert(temp);
            return ;
        }
        for(int i=0;i<nums.size();i++)
        {
           if(hash[i]==0)
           {
            temp.push_back(nums[i]);
            hash[i]=1;
            findCombination(ind+1,temp,nums,hash,st);
            temp.pop_back();
            hash[i]=0;
           }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        vector<int>hash(nums.size(),0);
        vector<int>temp;
        findCombination(0,temp,nums,hash,st);
         vector<vector<int>>ans(st.begin(),st.end());
        return ans;
        
    }
};