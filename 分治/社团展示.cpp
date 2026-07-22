/*#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

bool f(vector<long long>&sum,int m,long long mid)
{
    long long s=0;
    int len=sum.size();
    for(int i=0;i<len;++i) s+=min(sum[i],mid);
    return s>=m*mid;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<long long> sum(n);
    for(int i=0;i<n;++i) cin>>sum[i];
    sort(sum.begin(),sum.end());
    long long mi=1,ma=1,mid;
    for(int i=0;i<n;++i) ma+=sum[i];
    while (ma-mi>1)
    {
        mid=(mi+ma)/2;
        if(f(sum,m,mid)) mi=mid;
        else ma=mid;
    }
    cout<<mi;
    system("pause");

}*/