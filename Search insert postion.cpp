class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low = 0;
        int high = n-1;
        if(target>nums[high])
        {
            return n;
        }
        while(low<=high)
        {
            int mid= low + (high-low)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }

        }
        return low;

    }
};
