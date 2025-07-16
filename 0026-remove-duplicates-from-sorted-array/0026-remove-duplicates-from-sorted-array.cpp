class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uniquePositionIndex=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=nums[uniquePositionIndex]){
                nums[uniquePositionIndex+1]=nums[j];
                uniquePositionIndex++;
            }
        }
        return ++uniquePositionIndex;
        
    }
};