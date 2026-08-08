#include<iostream>

#include<map>

#include<vector>

using namespace std;

vector<int> price;
int N;
map<int,int> memo{{0,0}};

int f(int remain)
{
    auto it=memo.find(remain);
    if(it!=memo.end()) return it->second;
    int ans=0;
    for(int i=0;i<remain;++i) ans=max(ans,f(remain-i-1)+price[i]);
    return memo[remain]=ans;
}

int main()
{
    cin>>N;
    price.resize(N);
    for(int i=0;i<N;++i) cin>>price[i];
    cout<<f(N);
    system("pause");
}