class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int n=nums.size();
        // int cnt=0;
        // for(int i=0;i<n;i++)
        // {
        //     int sum=0;
        //     for(int j=i;j<n;j++)
        //     {
        //         sum+=nums[j];
        //         if(sum==k)
        //         {
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;
        int n= nums.size();
        int prefixsum[n];
        prefixsum[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefixsum[i]=nums[i]+prefixsum[i-1];
        }
        unordered_map<int,int> mp;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(prefixsum[i]==k)
            {
                count++;
            }
            if(mp.find(prefixsum[i]-k)!=mp.end())
            {
                count+=mp[prefixsum[i]-k];
            }
            mp[prefixsum[i]]++;
        }
        return count;

        
    }
};
