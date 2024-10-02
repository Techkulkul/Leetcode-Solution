class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()==1 || s.length()==0) return true;
      int i=0,j=s.length()-1;
      while(i<j)
      {
        while(i<j && !(s[i]>='A'&& s[i]<='Z' || s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9')) i++;
        while(i<j && !(s[j]>='A'&& s[j]<='Z' || s[j]>='a' && s[j]<='z' || s[j]>='0' && s[j]<='9')) j--;
        if(s[i]>='A'&& s[i]<='Z') s[i]=s[i]-'A'+'a';
        if(s[j]>='A'&& s[j]<='Z') s[j]=s[j]-'A'+'a';
        if(s[i]!=s[j]) return false;
        i++,j--;
      }
      return true;
        
    }
};