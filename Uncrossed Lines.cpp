class Solution {
public:
   int solve(int i,int j ,vector<int>&nums1,vector<int>&nums2){
        if(j>=nums2.size() || i>=nums1.size()) return 0;
        if(nums1[i]==nums2[j]){
            return  1+solve(i+1,j+1,nums1,nums2);
        }
        return max(solve(i,j+1,nums1,nums2),solve(i+1,j,nums1,nums2));
    }

    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        return solve(0,0,nums1,nums2);
    }
};
