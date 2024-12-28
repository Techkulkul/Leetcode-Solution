class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor) return 1;
        bool sign=true;
        if(dividend>0 && divisor <0) sign=false;
        if(dividend<0 && divisor >0) sign=false;
        long n=dividend;
        long d=divisor;
        n=abs(n);
        d=abs(d);
        int ans=0;
        while(n>=d)
        {
            int cnt=0;
            while(n>= (d<<(cnt+1)))
                cnt++;
            ans+=1<<cnt;
            n-=d<<cnt;    
        }
        if(ans==(1<<31) && sign) return INT_MAX;
        if(ans==(1<<31) && !sign) return INT_MIN;
        return sign?ans:-ans;
        
    }
};