class Solution {
public:
    void Combination(int i,int n,int k,vector<int>&temp,vector<vector<int>>&ans)
    {
        if(temp.size()==k)
        {
            ans.push_back(temp);
            return ;
        }
        for(int j=i;j<=n;j++)
        {
            temp.push_back(j);
            Combination(j+1,n,k,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        Combination(1,n,k,temp,ans);
        return ans;
        
    }
};