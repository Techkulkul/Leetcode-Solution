class Solution {
public:
    string minWindow(string s, string t) {
        //optimal solution
        int hash[256]={0};
        for(int i=0;i<t.length();i++) hash[t[i]]++;
        int l=0,r=0,minLength=s.length();
        int startingIndex=-1;
        int count=0;
        while(r<s.length()){
            if(hash[s[r]]>0) count++;
            hash[s[r]]--;
            while(count==t.length()){
                if(r-l+1<=minLength){
                    minLength=r-l+1;
                    startingIndex=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) count--;
                l++;
            }
            r++;
        }
        return startingIndex==-1?"":s.substr(startingIndex,minLength);
    }
};