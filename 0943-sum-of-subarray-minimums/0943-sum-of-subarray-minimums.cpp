class Solution {
public:
    vector<int> nse(vector<int>&arr){
        stack<int>st;
        vector<int>ans(arr.size(),0);
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty()&& arr[st.top()]>=arr[i]) st.pop();
            ans[i]=st.empty()?arr.size():st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> psee(vector<int>&arr){
        stack<int>st;
        vector<int>ans(arr.size(),0);
        for(int i=0;i<arr.size();i++){
            while(!st.empty()&& arr[st.top()]>arr[i]) st.pop();
            ans[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return ans;

    }


    int sumSubarrayMins(vector<int>& arr) {
        int mod=1e9+7;
        int total=0;
        vector<int>pseeArray=psee(arr);
        vector<int>nseArray=nse(arr);
        for(int i=0;i<arr.size();i++){
            int left=i-pseeArray[i];
            int right=nseArray[i]-i;
            total=(total+(left*1LL*right*arr[i])%mod)%mod;
        }
        return total;
        
    }
};