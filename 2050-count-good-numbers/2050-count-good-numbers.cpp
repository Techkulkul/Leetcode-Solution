class Solution {
public:
    int countGoodNumbers(long long n) {
        int cons=1000000007;
        long long nn=n/2;
        long long x=20;
        long long ans=1;
        while(nn>0)
        {
            if(nn%2==1)
            {
                ans=(ans*x)%cons;
                nn=nn-1;
            }
            else 
            {
                x=(x*x)%cons;
                nn=nn/2;
            }
        }
        if(n%2==1) return (5*ans)%cons;
        return ans;

        
    }
};