//Erase 2nd reapting number

class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int> ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1])
            {
                ans.push_back(arr[i]);
                arr.erase(arr.begin()+i);
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=i+1)
            {
                ans.push_back(i+1);
            }
        }
        
        return ans;
    }
};
