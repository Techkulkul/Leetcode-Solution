class Solution {
public:
    void subsequence(int i,int total,vector<int>&temp,vector<vector<int>>&ans,vector<int>arr)
    {
        if(total==0)
        {
            ans.push_back(temp);
            return;

        }
        // if(total<0) return;
        if(i==arr.size())
        {
            return;
        }
        if(arr[i]<=total)
        {
            temp.push_back(arr[i]);
            // total-=arr[i];
            subsequence(i,total-arr[i],temp,ans,arr);
            temp.pop_back();
        }
       
        // total+=arr[i];
        subsequence(i+1,total,temp,ans,arr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        int total;
        subsequence(0,target,temp,ans,candidates);
        return ans;
    }
};