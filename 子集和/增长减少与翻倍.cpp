#include<iostream>

#include<map>

#include<algorithm>

using namespace std;

long long s;
map<long long,long long> memo;

long long f(long long t)
{
    auto it=memo.find(t);
    if(it!=memo.end()) return it->second;
    long long ans;
    if(t<=s) ans=s-t;
    else{
        ans=t-s;
        if(t%2) ans=min({ans,f(t+1)+1,f(t-1)+1});
        else ans=min(ans,f(t/2)+1);
    }
    return memo[t]=ans;
}

int main()
{
    long long t;
    cin>>s>>t;
    cout<<f(t);
    system("pause");
}