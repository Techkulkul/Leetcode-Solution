class Solution {
public:
    int maxScore(string s) {
        int total=0;
        for(int i=0;i<s.length();i++)
            if(s[i]=='1') total++;
        int max=0,cnt0=0,leftSum=0,right1s=0,score=0;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='0') cnt0++;
            leftSum+=s[i]-'0';
            right1s=total-leftSum;
            score=right1s+cnt0;
            if(score>max) max=score;
        }    
        return max;
    }
};