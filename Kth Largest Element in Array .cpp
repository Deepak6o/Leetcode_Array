class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // return nums[n-k];
        priority_queue<int> p(nums.begin(),nums.end());
        for(int i=0;i<k-1;i++)
        {
            p.pop();
        }
        return p.top();
    }
};
