#include<bits/stdc++.h>

int getLongestZeroSumSubarrayLength(vector<int> &a){
	// Write your code here.
	// int n = a.size();
    // long long sum = a[0];
    // int left = 0;
    // int right = 0;
    // int ans = 0;

    // while (right < n) {
    //     if (sum == 0) {
    //         ans = max(ans, right - left + 1);
    //         right++;
    //         if (right < n) {
    //             sum += a[right];
    //         }
    //     } else if (sum < 0) {
    //         right++;
    //         if (right < n) {
    //             sum += a[right];
    //         }
    //     } else {
    //         sum -= a[left];
    //         left++;
    //     }
    // }

    // return ans;
    int n= a.size();
    long long prefix=0;
    int ans=0;
    unordered_map<long long, int> map;
    map[0]=-1;
    for(int i=0;i<n;i++){
        prefix+=a[i];
        if(map.find(prefix)!=map.end()){
            ans=max(ans,i-map[prefix]);
        }
        else{
            map[prefix]=i;
        }
    }
    return ans;
	
}
