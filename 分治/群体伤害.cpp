/*#include<iostream>

#include<stack>

#include<algorithm>

#include<string>

#include<vector>

#include<numeric>

using namespace std;

bool f(vector<int>& H,int ess,int ext,long long mid)
{
    int len=H.size();
    long long n=mid;
    for(int i=0;i<len;++i){
        long long tmp=H[i];
        tmp-=mid*ess;
        if(tmp>0) n-=tmp/ext+(tmp%ext>0);
    }
    return n>=0;
}

int main()
{
    int n,A,B;
    cin>>n>>A>>B;
    vector<int> H(n);
    for(int i=0;i<n;++i) cin>>H[i];
    int ess=B,ext=A-B;
    long long mi=-1,ma=accumulate(H.begin(),H.end(),0LL)/A+n;
    while(ma-mi>1){
        long long mid=(ma+mi)/2;
        if(f(H,ess,ext,mid)) ma=mid;
        else mi=mid;
    }

    cout<<ma;
}*/
