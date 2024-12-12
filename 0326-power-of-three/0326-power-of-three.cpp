class Solution {
public:
     bool powerThree(double num)
    {
        if(num==1.0) return true;
        if(num<1.0) return false;
        num=num/3;
        return powerThree(num);
    }
    bool isPowerOfThree(int n) {
        double num=n*1.0;
        return powerThree(num);
        
    }
};