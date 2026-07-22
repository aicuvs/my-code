/*#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

int f(vector<long long>&ind,long long mid)
{
    int left=0,len=ind.size(),sum=1;
    for(int i=1;i<len;++i){
        if(ind[i]-ind[left]<mid) continue;
        left=i;++sum;
    }
    return sum;
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<long long> ind(n);
    for(int i=0;i<n;++i) cin>>ind[i];
    sort(ind.begin(),ind.end());
    long long ma=ind[n-1]-ind[0],mi=0,ans=0;
    for(int i=1;i<n;++i) mi=min(mi,ind[i]-ind[i-1]);
    while (mi<=ma)
    {
        long long mid=(ma+mi)/2;
        if(f(ind,mid)>=k) mi=mid+1;
        else ma=mid-1;
    }
    cout<<ma;
    system("pause");
    
}*/