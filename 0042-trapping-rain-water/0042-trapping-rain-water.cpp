class Solution {
public:
    void calLeftMax(vector<int>&leftMax,vector<int>height){
        leftMax[0]=0;
        for(int i=1;i<height.size();i++){
            leftMax[i]=max(leftMax[i-1],height[i-1]);
        }
    }
    void calRightMax(vector<int>&rightMax,vector<int>height){
        rightMax[height.size()-1]=0;
        for(int i=height.size()-2;i>=0;i--){
            rightMax[i]=max(rightMax[i+1],height[i+1]);
        }
    }
    int trap(vector<int>& height) {
        int total=0;
        vector<int>leftMax(height.size(),0);
        vector<int>rightMax(height.size(),0);
        calLeftMax(leftMax,height);
        calRightMax(rightMax,height);
        for(int i=0;i<height.size();i++){
            if(height[i]<min(leftMax[i],rightMax[i])) total+=min(leftMax[i],rightMax[i])-height[i];
        }
        return total;
        
    }
};