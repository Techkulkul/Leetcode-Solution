class Solution {
public:
    int trap(vector<int>& height) {
        int leftMax=0,rightMax=0,total=0;
        int left=0,right=height.size()-1;
        while(left<right){
            if(height[left]<height[right]){
                if(leftMax>height[left]){
                    total+=leftMax-height[left];
                }
                leftMax=max(leftMax,height[left]);
                left++;
            }
            else{
                if(rightMax>height[right]){
                    total+=rightMax-height[right];
                }
                rightMax=max(rightMax,height[right]);
                right--;
            }
        }
        return total;
        
    }
};