class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //more optimised solution
        int n=nums.size();
        int arrayXor=0,originalXor=0;
        for(int i=0;i<n;i++){
            arrayXor^=nums[i];
            originalXor^=i; 
        }
        originalXor^=n;
        return arrayXor^originalXor;
    }
};