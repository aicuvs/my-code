/*#include<iostream>

#include<vector>

#include<cmath>

#include<algorithm>

using namespace std;

int main()
{
    int n,m,i=0,j=0;
    cin>>n>>m;
    vector<int> N(n),M(m);
    for(int i=0;i<n;++i) cin>>N[i];
    for(int i=0;i<m;++i) cin>>M[i];
    sort(N.begin(),N.end());
    sort(M.begin(),M.end());
    int ans=1e9;
    while (i<n-1&&j<m-1)
    {
        if(N[i]==M[j]){
            cout<<0;
            return 0;
        }
        if(N[i]>M[j]){
            ans=min(ans,N[i]-M[j]);
            j++;
        }
        else{
            ans=min(ans,-N[i]+M[j]);
            i++;
        }
    }
    for(int k=i;k<n;++k) ans=min(ans,abs(M[j]-N[k]));
    for(int k=j;k<m;++k) ans=min(ans,abs(N[i]-M[k]));
    cout<<ans;
    system("pause");

}*/