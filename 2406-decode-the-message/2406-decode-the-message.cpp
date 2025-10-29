class Solution {
public:
    string decodeMessage(string key, string message) {
        char start='a';
        char hash[300]={0};
        for(auto el:key){
            if(el!=' ' && hash[el]==0){
                hash[el]=start;
                start++;
            }
        }
        string ans;
        for(auto el:message){
            if(el==' ') ans.push_back(el);
            else ans.push_back(hash[el]);
        }
        return ans;
    }
};