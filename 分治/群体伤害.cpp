/*#include<iostream>

#include<vector>

#include<algorithm>

#include<numeric>

using namespace std;

bool f(vector<int>&vec,int ess,int ext,long long mid)
{
    int len=vec.size();
    vector<long long> tmp(len);
    for(int i=0;i<len;++i) tmp[i]=vec[i];
    for(int i=0;i<len;++i) tmp[i]-=mid*ess;
    for(int i=0;i<len;++i)
        if(tmp[i]>0)  mid-=tmp[i]/ext+(tmp[i]%ext>0);
    return mid>=0;
}
int main()
{
    int n,A,B,ans=0;
    cin>>n>>A>>B;
    vector<int> vec(n);
    int ess=B,ext=A-B;
    for(int i=0;i<n;++i) cin>>vec[i];
    sort(vec.begin(),vec.end(),greater<int>());
    if(n==0||vec[0]==0){
        cout<<0;
        return 0;
    }
    if(ess==0){
        long long ans=0;
        for(int i=0;i<n;++i){
            ans+=vec[i]/ext+(vec[i]%ext>0);
        }
        cout<<ans;
        return 0;
    }
    long long mi=0,ma=accumulate(vec.begin(),vec.end(),0LL)/ess+n,mid;
    while (ma-mi>1)
    {
        mid=(mi+ma)/2;
        if(f(vec,ess,ext,mid)) ma=mid;
        else mi=mid;
    }
    cout<<ma;
    system("pause");
    
}*/