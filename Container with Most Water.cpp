class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maax=0;
        while(l<r)
        {
            int lh=height[l];
            int rh=height[r];
            int miin=min(lh,rh);
            int len=r-l;
            int area=len*miin;
            maax=max(maax,area);
            if(lh<rh)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return maax;
        
    }
};
