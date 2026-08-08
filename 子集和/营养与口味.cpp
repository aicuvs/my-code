/*#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

const int OFFSET=300000;
const int MAX=600000;
const int INF=1e9;

int main()
{
    int n;
    cin>>n;
    vector<int> dp(MAX+1,-INF);
    dp[OFFSET]=0;
    for(int i=0;i<n;++i){
        int x,y;
        cin>>x>>y;
        if(x>=0)
            for(int j=MAX;j>=x;--j) dp[j]=max(dp[j],dp[j-x]+y);
        else for(int j=0;j<=MAX+x;++j) dp[j]=max(dp[j],dp[j-x]+y);
    }

    int ans=0;
    for(int j=OFFSET;j<=MAX;++j)
        if(dp[j]>=0) ans=max(ans,j-OFFSET+dp[j]);
    cout<<ans;
    system("pause");
    
}*/