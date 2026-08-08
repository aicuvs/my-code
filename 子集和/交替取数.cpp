#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int N;
vector<int> vec;
vector<int> sum;
int memo[5001][5001];

int f(int begin,int end)
{
    if(begin==end) return 0;
    if(memo[begin][end]!=-1) return memo[begin][end];
    return memo[begin][end]=sum[end]-sum[begin]-min(f(begin+1,end),f(begin,end-1));
}

int main()
{
    cin>>N;
    vec.resize(N);sum.resize(N+1);
    for(int i=0;i<N;++i) cin>>vec[i];
    sum[0]=0;
    for(int i=1;i<=N;++i) sum[i]=sum[i-1]+vec[i-1];
    memset(memo,-1,sizeof memo);
    cout<<f(0,N);
}
