class Solution {
public:
    void combination(int i,int target,vector<int>&array,vector<int>&temp,vector<vector<int>>&ans)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        else if(i==array.size()) return;
        if(array[i]<=target)
        {
            temp.push_back(array[i]);
            combination(i,target-array[i],array,temp,ans);
            temp.pop_back();
        }
        combination(i+1,target,array,temp,ans);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>temp;
        combination(0,target,candidates,temp,ans);
        return ans;
        
    }
};