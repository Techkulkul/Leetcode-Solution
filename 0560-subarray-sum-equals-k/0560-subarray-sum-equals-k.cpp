class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //Optimal
        int n=nums.size();
        int cnt=0;
        long long sum=0;
        map<long long,int>hashMap;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==k) cnt++;
            long long rem=sum-k;
            if(hashMap.find(rem)!=hashMap.end()){
                cnt+=hashMap[rem];
            }
            hashMap[sum]++;
        }
        return cnt;
    }
};