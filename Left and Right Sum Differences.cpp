
class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> ans,leftsum;
        int sum1=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            leftsum.push_back(sum1);
            sum1+=nums[i];
        }

        int sum2=0;
        vector<int> rightsum(n,0);
        for(int i=n-1;i>=0;i--)
        {
            rightsum[i]=sum2;
            sum2+=nums[i];
        }

        for(int i=0;i<n;i++)
        {
            ans.push_back(abs(leftsum[i]-rightsum[i]));
        }

        return ans;



    }
};
