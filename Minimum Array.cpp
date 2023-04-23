class Solution{
public:
  int GCD(int a,int b)
  {
      if(b==0)
      {
          return a;
      }
      return GCD(b,a%b);
  }
    int minimumNumber(int n,vector<int> &arr){
        // Code here
        int gcd=arr[0];
        for(int i=0;i<n;i++)
        {
            gcd=GCD(gcd,arr[i]);
        }
        return gcd;
    }
};
