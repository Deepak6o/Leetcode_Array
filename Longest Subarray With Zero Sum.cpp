#include<bits/stdc++.h>>

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	// int ans=0;
	// for(int i=0;i<arr.size();i++)
	// {
	// 	int sum=0;
	// 	for(int j=i;j<arr.size();j++)
	// 	{
	// 		sum=sum+arr[j];
	// 		if(sum==0)
	// 		{
	// 			ans=max(ans,j-i+1);
	// 		}
	// 	}
	// }
	// return ans;
	unordered_map<int,int> mp;
	int maax=0;
	int presum=0;
	for(int i=0;i<arr.size();i++)
	{
		presum+=arr[i];
		if(presum==0)
		{
			maax=i+1;
		}
		else{
			if(mp.find(presum)!=mp.end())
			{
				maax=max(maax,i-mp[presum]);
			}
			else{
				mp[presum]=i;
			}
		}
	}
	return maax;
}
