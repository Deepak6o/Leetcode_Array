class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int pps[n];
        int ppe[n]; 
        pps[0]=nums[0];   
        for(int i=1;i<n;i++)
        {
            pps[i]=pps[i-1]*nums[i];
        }
        ppe[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            ppe[i]=ppe[i+1]*nums[i];
        } 
        ans.push_back(ppe[1]);
        for(int i=1;i<n-1;i++)
        {
            ans.push_back(pps[i-1]*ppe[i+1]);
        }
        ans.push_back(pps[n-2]);
        return ans;
    }
};
