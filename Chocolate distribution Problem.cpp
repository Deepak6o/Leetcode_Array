#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int m;
    cin>>m;

    int miin=INT_MAX;
    for(int i=0; i+m-1<n; i++)
    {
        int sum=(a[i+2]-a[i]);
        if(sum<miin)
        {
            miin=sum;
        }

    }
    cout<<miin;
}
