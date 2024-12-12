class Solution {
public:
    bool powerTwo(double num)
    {
        if(num==1.0) return true;
        if(num<1.0) return false;
        num=num/2;
        return powerTwo(num);
    }
    bool isPowerOfTwo(int n) {
        double num=n*1.0;
        return powerTwo(num);

        
    }
};