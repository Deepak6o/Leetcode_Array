#include<bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.
    // set<vector<int>> s;
    // for(int i=0;i<n;i++){
    //     set<int> hash;
    //     for(int j=i+1;j<n;j++){
    //         int third=-(arr[i]+arr[j]);
    //         if(hash.find(third)!=hash.end()){
    //             vector<int> temp={arr[i],arr[j],third};
    //             sort(temp.begin(),temp.end());
    //             s.insert(temp);
    //         }
    //         hash.insert(arr[j]);
    //     }
    // }
    // vector<vector<int>> ans(s.begin(),s.end());
    // return ans;
    sort(arr.begin(),arr.end());
    set<vector<int>>s;
    for(int i=0;i<n-2;i++){
        int left=i+1;
        int right=n-1;
        while(left<right){
            int sum=arr[i]+arr[left]+arr[right];
            if(sum==0){
                vector<int>temp={arr[i],arr[left],arr[right]};
                s.insert(temp);
                left++;
                right--;
            }
            else if(sum<0){
                left++;
            }
            else{
                right--;
            }
        }
    }
    vector<vector<int>>ans(s.begin(),s.end());
    return ans;
}
