class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0,j=s.length()-1;
        while(i<=j){
            while(i<s.length() && !((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))){
                i++;
            }
            while(j>=0&&!((s[j]>='A' && s[j]<='Z')|| (s[j]>='a' && s[j]<='z'))){
                j--;
            }
            if(i<s.length()&& j>=0 &&i<=j){
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--;
            }
        }
        return s;
    }
};