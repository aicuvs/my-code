#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n,t,x;
    cin>>n>>t;
    vector<int> dp(t,0),cop;
    for(int i=0;i<n;++i){
        cop=dp;cin>>x;
        for(int j=0;j<t;++j) {
            if(cop[j]) dp[(j+x)%t]+=cop[j];
            dp[(j+x)%t]%=1000000007;
        }
        ++dp[x%t];
        dp[x%t]%=1000000007;
    }
    cout<<dp[0];
    system("pause");
}