class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int max=a[n-1];
        vector<int> v;
        v.push_back(a[n-1]);
        int sum=0;
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=max)
            {
                v.push_back(a[i]);
                max=a[i];
            }
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};
