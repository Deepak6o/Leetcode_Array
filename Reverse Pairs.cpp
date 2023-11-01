
void merge(vector<int> &a, int low, int mid, int high)
{
    vector<int> temp;
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
int countpair(vector<int> &a,int low,int mid, int high)
{
    int cnt=0;
    int right=mid+1;
    for(int i=low;i<=mid;i++)
    {
        while(right<=high and a[i]>2*a[right])
        {
            right++;
        }
        cnt+=(right-(mid+1));
    }
    return cnt;
}
int mergesort(vector<int> &a, int low, int high)
{
    int cnt=0;
    if(low>=high)return cnt;
    int mid=low+(high-low)/2;
    cnt+=mergesort(a,low,mid);
    cnt+=mergesort(a,mid+1,high);
    cnt+=countpair(a,low,mid,high);
    merge(a,low,mid,high);
    return cnt;

}

int team(vector <int> & skill, int n)
{
    // Write your code here.
    // int count=0;
    //     for(int i=0;i<skill.size()-1;i++)
    //     {
    //         for(int j=i+1;j<skill.size();j++)
    //         {
    //             if(skill[i]>2*skill[j]){
    //                 count++;
    //             }
    //         }
    //     }
    //     return count;
    return mergesort(skill,0,n-1);
    
}
