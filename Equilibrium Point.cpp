//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==0 or n==1)
        {
            return n;
        }
        int i=0;
        int j=n-1;
        int sum1=0;
        int sum2=0;
        while(i!=j)
        {
            if(sum1>sum2)
            {
                sum2+=a[j];
                j--;
            }
            else
            {
                sum1+=a[i];
                i++;
            }
        }
        if(sum1==sum2)
        {
            return i+1;
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
