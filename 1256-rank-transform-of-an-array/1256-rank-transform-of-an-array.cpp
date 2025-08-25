class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int>s;
        unordered_map<int,int>hash;
        for(int i=0;i<arr.size();i++) s.insert(arr[i]);
       int  count=0;
        for(auto it:s){
            count++;
            hash[it]=count;
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=hash[arr[i]];
        }
        return arr;


        
    }
};