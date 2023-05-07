class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it: mp)
        {
            if(it.second==1)
            {
                ans.push_back(it.first);
            }
            else if(it.second>=2)
            {
                ans.push_back(it.first);
                ans.push_back(it.first);
            }
        }
        int final=ans.size();
        nums.clear();
        for(auto x: ans)
        {
            nums.push_back(x);
        }
        return final;
    }
};
