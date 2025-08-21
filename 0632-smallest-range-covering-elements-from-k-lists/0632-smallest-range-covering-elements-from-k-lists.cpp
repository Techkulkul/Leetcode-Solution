using p = pair<int,pair<int,int>>;
class Compare{
    public:
    bool operator()(p a,p b){
        return a.first > b.first;
    }
};
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        //optimal
        priority_queue<p,vector<p>,Compare>minHeap;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i][0]>maxi) maxi=nums[i][0];
            minHeap.push({nums[i][0],{i,0}});
        }
        int startVal=minHeap.top().first;
        int endVal=maxi;
        while(!minHeap.empty()){
            int topVal=minHeap.top().first;
            int topRow=minHeap.top().second.first;
            int topCol=minHeap.top().second.second;
            mini=topVal;
            minHeap.pop();
            if(maxi-mini<endVal-startVal){
                startVal=mini;
                endVal=maxi;
            }
            if(topCol+1<nums[topRow].size()){
                maxi=max(maxi,nums[topRow][topCol+1]);
                 minHeap.push({nums[topRow][topCol+1],{topRow,topCol+1}});
            }
            else{
                break;
            }
        }
        return {startVal,endVal};

    }
};