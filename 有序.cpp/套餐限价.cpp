/*#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

int main()
{
    long long n,m,l;
    long long ans=0;
    cin>>n>>m>>l;
    vector<long long> N(n),M(m),M_add(m);
    for(int i=0;i<n;++i) cin>>N[i];
    for(int i=0;i<m;++i) cin>>M[i];
    sort(N.begin(),N.end());
    sort(M.begin(),M.end());
    M_add[0]=M[0];
    for(int i=1;i<m;++i) M_add[i]+=M_add[i-1]+M[i];
    int right=m-1;
    for(int i=0;i<n;++i){
        while (right>=0&&N[i]+M[right]>l) --right;
        if(right>=0) ans+=M_add[right]+(right+1)*N[i];
        if(right<=m-2) ans+=l*(m-right-1);
    }
    cout<<ans;
    system("pause");
}*/