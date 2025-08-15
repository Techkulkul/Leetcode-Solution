class Solution {
public:
    int subarraysWithKDistinctOrLessThanK(vector<int>&nums,int k){
        int l=0,r=0,count=0;
        map<int,int>hash;
        while(r<nums.size()){
            hash[nums[r]]++;
            while(hash.size()>k){
                hash[nums[l]]--;
                if(hash[nums[l]]==0) hash.erase(nums[l]);
                l++;
            }
            if(hash.size()<=k) count+=r-l+1;
            r++;
        }
        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        //optimal
        return subarraysWithKDistinctOrLessThanK(nums,k) - subarraysWithKDistinctOrLessThanK(nums,k-1);
    }
};