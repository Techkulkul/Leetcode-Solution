class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //brute
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            long long sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum==k) cnt++;
            }
        }
        return cnt;
        
    }
};