class Solution {
public:
    int myAtoi(string s) {
        long long num=0;
        bool plusSign=false;
        bool minusSign=false;
        bool init=false;
        for(int i=0;i<s.length();i++)
        {
            if(plusSign==true && minusSign==true) return 0;
            if(s[i]==' ') {
                if(init==true) break;

             }
            else if(s[i]=='-' || s[i]=='+') 
            {
                if(init==true) break;
                else 
                {
                    if(s[i]=='-') minusSign=true;
                    else plusSign=true;
                }
                init=true;
            }
            else{
                int digit=s[i]-'0';
                if(digit>=0 && digit<=9) {num=num*10+digit;
                init=true;
                if(minusSign==true) {
                    if(num*-1<=INT_MIN) return INT_MIN;
                }
                if(num>INT_MAX) return INT_MAX;
                
                }
                else break;
            }
        }
        if(plusSign==true && minusSign==true) return 0;
        if(minusSign==true) num=num*-1;
         
        
        return num;
    }
};