class Solution {
public:
    void trim(string &s)
    {
        while(s[0]==' ')
        {
            s.erase(s.begin());
        }
    }
    int myAtoi(string s) {
        if(s.length()==0) return 0;
        trim(s);
        int sign=s[0]=='-'?-1:1;
        if(s[0]=='+' || s[0]=='-')
        {
            s=s.substr(1);
        }
        long long num=0;
        for(int i=0;i<s.length();i++)
        {
            if(!isdigit(s[i])) break;
            else 
            {
                num=num*10+s[i]-'0';
                if(num*sign<INT_MIN) return INT_MIN;
                if(num*sign>INT_MAX) return INT_MAX;
            }
        }
        return num*sign;

    }
};