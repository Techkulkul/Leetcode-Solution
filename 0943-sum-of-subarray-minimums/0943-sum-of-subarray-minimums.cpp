class Solution {
public:
    void findPSE(vector<int>&pse,vector<int>arr){
        stack<int>st;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
            pse[i]=st.empty()?-1:st.top();
            st.push(i);
        }
    }
    void findNSE(vector<int>&nse,vector<int>arr){
        stack<int>st;
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            nse[i]=st.empty()?n:st.top();
            st.push(i);
        }
    }
    int sumSubarrayMins(vector<int>& arr) {
        int mod=(int)1e9+7;
        int n=arr.size();
        vector<int>pse(n,0);
        vector<int>nse(n,0);
        findPSE(pse,arr);
        findNSE(nse,arr);
        int total=0;
        for(int i=0;i<arr.size();i++){
            int totalLeftSmallerElement=i-pse[i];
            int totalRightSmallerElement=nse[i]-i;
            total=(total+(totalLeftSmallerElement*1LL*totalRightSmallerElement*arr[i])%mod)%mod;
        }
        return total;
        
    }
};