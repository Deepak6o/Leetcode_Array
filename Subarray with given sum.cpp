class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        // vector<int> ans;        
        // for(int i=0;i<n-1;i++)
        // {
        //     long long sum =arr[i];
        //     for(int j=i+1;j<n;j++)
        //     {
        //         sum=sum+arr[j];
        //         if(sum>s)
        //         {
        //             break;
        //         }
        //         else if(sum==s)
        //         {              
        //             ans.push_back(i+1);
        //             ans.push_back(j+1);
        //             return ans;                  
        //         }         
        //     }
        // }
        // return {-1};
        vector<int> ans;
        int i=0;
        int j=-1;
        long long sum=0;
        while(j<n and s)
        {
            if(sum==s)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(sum>s)
            {
                sum=sum-arr[i];
                i++;
            }
            else 
            {
                 j++;
                sum=sum+arr[j];
               
            }
        }
        ans.push_back(-1);
        return ans;
    }
};
