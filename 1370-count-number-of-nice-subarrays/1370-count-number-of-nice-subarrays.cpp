class Solution {
public:
    int numberOfSubarraysLessThanEqualK(vector<int>&nums,int k){
        if(k<0) return 0;
        int l=0,r=0,oddCount=0,totalSubarray=0;
        while(r<nums.size()){
            oddCount+=nums[r]%2;
            while(oddCount>k){
                oddCount-=nums[l]%2;
                l++;
            }
            totalSubarray+=r-l+1;
            r++;
        }
        return totalSubarray;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        //same as previous question (binary array)
        //optimal
        return numberOfSubarraysLessThanEqualK(nums,k)-numberOfSubarraysLessThanEqualK(nums,k-1);
    }
};