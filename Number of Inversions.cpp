int cnt=0;
void merge(vector<int>&a,int low, int mid, int high)
{
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid and right<=high)
    {
        if(a[left]<=a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            cnt+=(mid-left+1);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(a[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(a[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        a[i]=temp[i-low];
    }
}
void mergesort(vector<int>&a, int low, int high)
{
    if(low>=high)return;
    int mid=low+(high-low)/2;
    mergesort(a, low, mid);
    mergesort(a,mid+1,high);
    merge(a,low,mid,high);
}
int numberOfInversions(vector<int>&a, int n) {
    // Write your code here.
    // int count=0;
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(a[i]>a[j] and i<j)
    //         {
    //             count++;
    //         }
    //     }
    // }
    // return count;
    mergesort(a,0,n-1);
    return cnt;
}
