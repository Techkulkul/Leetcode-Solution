class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //optimal solution
        int n=nums.size();
        int xor1=0;
        for(int i=0;i<n;i++){
            xor1^=nums[i];
        }
        return xor1;
    }
};