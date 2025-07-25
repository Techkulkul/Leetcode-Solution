class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //no brute force solution exist 
        //optimal sol
        int n=nums.size();
        int cnt=0,maxOnes=0;
        for(int i=0;i<n;i++){
           if(nums[i]==1){
            cnt++;
            maxOnes=max(maxOnes,cnt);
           }
           else cnt=0;
        }
        return maxOnes;
    }
};