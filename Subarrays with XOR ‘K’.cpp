#include<bits/stdc++.h>
int subarraysWithSumK(vector<int> a, int b) {
  // Write your code here
//   int n = a.size();
//   int count = 0;
//   for(int i=0;i<n;i++){
//       int XOR=0;
//       for(int j=i;j<n;j++){
//           XOR^=a[j];
//           if(XOR==b){
//               count++;
//           }
//       }
//   }
//   return count;
    int xr=0;
    map<int,int> mp;
    mp[xr]++;
    int cnt=0;
    for(int i=0;i<a.size();i++){
        xr^=a[i];
        int x=xr^b;
        cnt+=mp[x];
        mp[xr]++;
    }
    return cnt;
}
