class Solution {
public:
    bool isHappy(int n) {
        if(n==1 or n==7)
        {
            return true;
        }
        if(n<10)
        {
            return false;
        }
        int sum=0;
        while(n)
        {
            sum+=(n%10)*(n%10);
            n/=10;
        }
        if(sum==1)
        {
            return true;
        }
        else
        {
            return isHappy(sum);
        }
    }
};
