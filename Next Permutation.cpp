class Solution{
public:
    int next(int N,vector<int> &arr)
    {
        return next_permutation(arr.begin(),arr.end());
    }
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        next(N,arr);
        vector<int> ans;
        for(auto x: arr)
        {
            ans.push_back(x);
        }
        return ans;
        
    }
};
