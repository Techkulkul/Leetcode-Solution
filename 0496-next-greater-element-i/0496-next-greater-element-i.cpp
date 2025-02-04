class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int i=nums2.size()-1;
        stack<int>st;
        unordered_map<int,int>mpp;
        vector<int>ans;
        while(i>=0){
            while(!st.empty()&& nums2[i]>=st.top()) st.pop();
            if(st.empty()) mpp[nums2[i]]=-1;
            else mpp[nums2[i]]=st.top();
            st.push(nums2[i]);
            i--;
        }
        for(int i=0;i<nums1.size();i++){
            ans.push_back(mpp[nums1[i]]);
        }
        return ans;
    }
};