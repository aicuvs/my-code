#include<iostream>

#include<vector>

#include<algorithm>

#include<numeric>

using namespace std;

int f(const vector<int> &sum, long long mid)
{
    int len = sum.size(), ans = 1, left = 0;

    for (int i = 0; i < len - 1; ++i)
    {
        if (sum[i + 1] - sum[i] > mid)
            return len;

        if (sum[i + 1] - sum[left] > mid)
        {
            left = i;
            ++ans;
        }
    }

    return ans;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> vec(n),sum(n+1);
    for(int i=0;i<n;++i) cin>>vec[i];
    sum[0]=0;
    for(int i=1;i<=n;++i) sum[i]=sum[i-1]+vec[i-1];
    int mi=0,ma=sum[n],mid;
    while (ma-mi>1)
    {
        mid=(mi+ma)/2;
        if(f(sum,mid)<=m) ma=mid;
        else mi=mid;
    }
    cout<<ma;
    system("pause");
    

}