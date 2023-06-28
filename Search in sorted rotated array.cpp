class Solution {
public:
    int findMin(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return nums[0];
         int n=nums.size();
        int l=0;
        int r=n-1;
        
         int index;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]<=nums[(mid+n-1)%n] and nums[mid]<=nums[(mid+1)%n])
             {
                index=mid;
            break;
           }       
             else if(nums[mid]>nums[n-1])
                 l=mid+1;
             else
                r=mid-1;
        }
        return nums[index];
    }
};
