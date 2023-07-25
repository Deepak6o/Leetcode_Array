void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	vector<int> v1;
    	vector<int> v2;
    	for(int i=0;i<n/2;i++)
    	{
    	    v1.push_back(arr[i]);
    	}
    	for(int i=n-1;i>=n/2;i--)
    	{
    	    v2.push_back(arr[i]);
    	}
    	for(int i=0;i<n;i+=2)
    	{
    	    arr[i]=v2[i/2];
    	}
    	 for(int i=1;i<n;i+=2)
    	 {
    	     arr[i]=v1[i/2];
    	 }
    	 
    }
