class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //better 
        int n=nums.size();
        map<int,int>hash;
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(auto it:hash){
            if(it.second==1) return it.first;
        }
        return -1;
    }
};