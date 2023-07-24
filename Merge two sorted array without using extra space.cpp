class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    int count=0;
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++)
	    {
	        mp[arr[i]]++;
	    }
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            int sum=arr[i]+arr[j];
	            if(mp[sum])
	            {
	                count++;
	            }
	        }
	    }
	    return count;
	}
};
