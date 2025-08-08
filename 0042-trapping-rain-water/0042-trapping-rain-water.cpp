class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>prefixMax(n,0);
        vector<int>suffixMax(n,0);

        prefixMax[0]=height[0];
        for(int i=1;i<n;i++){
            prefixMax[i]=max(height[i],prefixMax[i-1]);
        }

        suffixMax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            suffixMax[i]=max(height[i],suffixMax[i+1]);
        }

        long long total=0;

        for(int i=0;i<n;i++){
            if(height[i]<prefixMax[i] && height[i]<suffixMax[i]){
                total+=min(prefixMax[i],suffixMax[i])-height[i];
            }
        }
        return total;

        //we can further reduce TC and SC by keeping record of prefixSum while iterating

    }
};