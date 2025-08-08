class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        unordered_map<int,int>hash;
        int rightMax=-1;
        for(int i=n-1;i>=0;i--){
            hash[i]=rightMax;
            rightMax=max(rightMax,height[i]);
        }

        long long ans=0;
        int leftMax=-1;
        for(int i=0;i<n;i++){
            if(height[i]<leftMax && height[i]<hash[i]) ans+=min(leftMax,hash[i])-height[i];
            leftMax=max(leftMax,height[i]);
        }
        
        return ans;

        
    }
};