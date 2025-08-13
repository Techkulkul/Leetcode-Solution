class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        //optimal solution
        int l=0,r=0,maxLength=0;
        int zeroCount=0;
        while(r<nums.size()){
            if(nums[r]==0) zeroCount++;
            if(zeroCount>k){
                if(nums[l]==0) zeroCount--;
                l++;
            }
            if(zeroCount<=k) maxLength=max(maxLength,r-l+1);
            r++;
        }
        return maxLength;
    }
};