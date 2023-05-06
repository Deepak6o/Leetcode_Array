class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int a=(n/3);
        unordered_map<int,int> m;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        for(auto x: m)
        {
            if(x.second>a)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
        
    }
};
