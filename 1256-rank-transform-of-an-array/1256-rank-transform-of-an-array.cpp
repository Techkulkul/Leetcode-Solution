class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>copy(arr.begin(),arr.end());
        sort(copy.begin(),copy.end());
        unordered_map<int,int>mpp;
        int start=1;
        for(int i=0;i<copy.size();i++)
        {
            if(mpp.find(copy[i])==mpp.end())
            {
                mpp[copy[i]]=start;
                start++;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=mpp[arr[i]];
        }
        return arr;
        
    }
};