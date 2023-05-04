class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                v1.push_back(nums[i]);
            }
            else{
                v2.push_back(nums[i]);
            }
        }
        vector<int> ans;
        for(auto x: v2)
        {
            ans.push_back(x);
        }
        for(auto x: v1)
        {
            ans.push_back(x);
        }
        nums=ans;
    }
};
