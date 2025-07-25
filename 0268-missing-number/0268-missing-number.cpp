class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<=n;i++){
            bool isFound=false;
            for(int j=0;j<n;j++){
                if(i==nums[j]){
                    isFound=true;
                    break;
                }
            }
            if(isFound==false) return i;
        }
        return -1;
    }
};