class Compare{
    public:
    bool operator()(int a,int b){
        return a>b;
    }
};

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>clone(score);
        sort(clone.begin(),clone.end(),Compare());
        map<int,string>hash;
        for(int i=0;i<clone.size();i++){
            if(i==0) hash[clone[i]]="Gold Medal";
            else if(i==1) hash[clone[i]]="Silver Medal";
            else if(i==2) hash[clone[i]]="Bronze Medal";
            else hash[clone[i]]=to_string(i+1);
        }
        vector<string>ans;
        for(int i=0;i<score.size();i++){
            ans.push_back(hash[score[i]]);
        }
        return ans;

    }
};