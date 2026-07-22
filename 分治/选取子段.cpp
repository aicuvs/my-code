/*#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

long long f(vector<long long> &sum,long long mid)
{
    long long ans=0;
    int len=sum.size(),left=0;
    for(int i=0;i<len;++i){
        while (sum[i]-sum[left]>mid) ++left;
        ans+=i-left;
    }
    return ans;
}

int main()
{
    int n;
    long long k;
    cin>>n>>k;
    vector<long long>vec(n),sum(n+1);
    for(int i=0;i<n;++i) cin>>vec[i];
    sum[0]=0;
    for(int i=1;i<=n;++i) sum[i]=sum[i-1]+vec[i-1];
    long long mi=0,ma=sum[n]+1;
    while (ma-mi>1)
    {
        long long mid=(ma+mi)/2;
        if(f(sum,mid)>=k) ma=mid;
        else mi=mid;
    }
    cout<<ma;
    system("pause");
    
}*/