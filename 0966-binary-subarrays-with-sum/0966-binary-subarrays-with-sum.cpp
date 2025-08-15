class Solution {
public:
    int numSubarraysWithSumOrLessThanGoal(vector<int>&nums,int goal){
        //brute and better are from array question 
        //optimal because of 0 and 1
        if(goal<0) return 0;
        int l=0,r=0,sum=0,totalCount=0;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
            totalCount+=r-l+1;
            r++;
        }
        return totalCount;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return numSubarraysWithSumOrLessThanGoal(nums,goal)- numSubarraysWithSumOrLessThanGoal(nums,goal-1);
    }
};