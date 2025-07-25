class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //optimal solution
        int n=nums.size();
        long long sum=(n*(n+1))/2;
        long long arraySum=accumulate(nums.begin(),nums.end(),0);
        return (int)sum-arraySum;

    }
};