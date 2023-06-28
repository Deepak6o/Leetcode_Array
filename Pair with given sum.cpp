
class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        
        // Complete the function
        int count=0;
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if(arr[i]+arr[j]>sum)
            {
                j--;
            }
            else if(arr[i]+arr[j]<sum)
            {
                i++;
            }
            else
            {
                count++;
                i++;
                j--;
            }
        }
        if(count==0)
        {
            return -1;
        }
        return count;
    
        
    }
};
