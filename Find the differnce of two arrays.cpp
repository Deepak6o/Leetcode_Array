class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        set<int> s1;
        set<int> s2;
        for(int i=0;i<nums1.size();i++)
        {
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            s2.insert(nums2[i]);
        }
        vector<int> v1;
        vector<int> v2;
        for(auto x: s1)
        {
            if(s2.find(x)==s2.end())
            {
                v1.push_back(x);
            }
        }
        for(auto x: s2)
        {
            if(s1.find(x)==s1.end())
            {
                v2.push_back(x);
            }
        }
        ans.push_back(v1);
        ans.push_back(v2);
        return ans;
    }
};
