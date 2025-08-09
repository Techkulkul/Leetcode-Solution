class Solution {
public:
    vector<int> nextSmallestElement(vector<int>&arr){
        stack<int>st;
        vector<int>ans(arr.size(),0);
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            ans[i]=st.empty()?arr.size():st.top();
            st.push(i);
        }
        return ans;

    }
    vector<int> previousSmallestElement(vector<int>&arr){
        stack<int>st;
        vector<int>ans(arr.size(),0);
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            ans[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return ans;

    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int>nse=nextSmallestElement(heights);
        vector<int>pse=previousSmallestElement(heights);
        int maxArea=0;
        for(int i=0;i<heights.size();i++){
            int left=i-pse[i];
            int right=nse[i]-i;
            maxArea=max(maxArea,(left+right-1)*heights[i]);
        }
        return maxArea;
        
    }
};