class Solution {
public:
    bool isPalindrome(string s) {
       int i=0;
       while(i<s.length())
        {
            if(s[i]>='A' && s[i]<='Z')  {s[i]=s[i]-'A'+'a';
            i++;}
            else if(s[i]>='a' && s[i]<='z') {
                i++;

            }
            else if(s[i]>='0' && s[i]<='9'){i++;

            }
            else s.erase(i,1);
        }
        // if(s.length()==1) return false;
        int k=0,j=s.length()-1;
        while(k<j)
        {
            if(s[k]!=s[j]) return false;
            else 
            {
                k++,j--;
            }
        }
        return true;
        
    }
};