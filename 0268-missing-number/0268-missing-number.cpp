class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //better solution
        int n=nums.size();
        vector<int>hash(n+1, 0);
        for(int i=0;i<n;i++){
            hash[nums[i]]=1;
        }
        for(int i=0;i<n+1;i++){
            if(hash[i]!=1) return i;
        }
        return -1;
    }
};