class Solution {
public:

    vector<int> nextGreaterElement(vector<int>&arr){
        stack<int>st;
        vector<int>ans(arr.size(),0);
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]<=arr[i]) st.pop();
            ans[i]=st.empty()?arr.size():st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> previousGreaterEqualElement(vector<int>&arr){
        stack<int>st;
        vector<int>ans(arr.size(),0);
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]<arr[i]) st.pop();
            ans[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return ans;
    }

    long long sumOfSubarrayMaximum(vector<int>&arr){
        vector<int>nge=nextGreaterElement(arr);
        vector<int>pgee=previousGreaterEqualElement(arr);
        long long total=0;
        for(int i=0;i<arr.size();i++){
            int left=i-pgee[i];
            int right=nge[i]-i;
            total=(total+(left*1LL*right*arr[i]));
        }
        return total;
    }

    vector<int> nextSmallerElement(vector<int>&arr){
        stack<int>st;
        vector<int>ans(arr.size(),0);
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            ans[i]=st.empty()?arr.size():st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> previousSmallerElement(vector<int>&arr){
        stack<int>st;
        vector<int>ans(arr.size(),0);
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
            ans[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return ans;
    }


    long long sumOfSubarrayMinimum(vector<int>&arr){
        vector<int>nse=nextSmallerElement(arr);
        vector<int>psee=previousSmallerElement(arr);
        long long total=0;
        for(int i=0;i<arr.size();i++){
            int left=i-psee[i];
            int right=nse[i]-i;
            total=(total+(left*1LL*right*arr[i]));
        }
        return total;
    }
    long long subArrayRanges(vector<int>& nums) {
        //optimal solution
        return sumOfSubarrayMaximum(nums)-sumOfSubarrayMinimum(nums);
        
    }
};