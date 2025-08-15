class Solution {
public:
    int numberOfSubstrings(string s) {
        //optimal
        int count=0;
        vector<int>previousSeen(3,-1);
        for(int i=0;i<s.length();i++){
            previousSeen[s[i]-'a']=i;
            if(previousSeen[0]!=-1 && previousSeen[1]!=-1 && previousSeen[2]!=-1){
                count+=1+*min_element(previousSeen.begin(),previousSeen.end());
            }
        }
        return count;
    }
};