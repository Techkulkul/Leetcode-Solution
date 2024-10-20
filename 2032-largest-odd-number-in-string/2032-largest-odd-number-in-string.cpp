class Solution {
public:
    string largestOddNumber(string num) {
        string ans;
        int i=num.length()-1;
        int len=0;
        while(i>=0&& num[i]%2==0)
        {
            i--;
            len++;

        }
        if(i==-1) return "";
        return ans=num.substr(0,num.length()-len);
        
    }
};