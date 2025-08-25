class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int maxi=*max_element(score.begin(),score.end());
        vector<int>hash(maxi+1,-1);
        for(int i=0;i<score.size();i++){
            hash[score[i]]=i;
        }
        int count=0;
        vector<string>ans(score.size(),"");
        for(int i=hash.size()-1;i>=0;i--){
            if(hash[i]!=-1){
                count++;
                if(count==1) ans[hash[i]]="Gold Medal";
                else if(count==2) ans[hash[i]]="Silver Medal";
                else if(count==3) ans[hash[i]]="Bronze Medal";
                else ans[hash[i]]=to_string(count);
                
            }
        }

        return ans;
    }
};