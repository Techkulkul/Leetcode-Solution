class Solution {
public:
    std::array<int,256> hash(string s){
        std::array<int,256>hash={0};
        for(auto el:s){
            hash[el]++;
        }
        return hash;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<std::array<int,256>, vector<string> >mpp;

        for(auto it:strs){
            mpp[hash(it)].push_back(it);
        }
        vector<vector<string>>ans;
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};