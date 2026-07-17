/*#include<iostream>

#include<vector>

using namespace std;

int main()
{
    int n,t,ans=0;
    cin>>n>>t;
    vector<int> A(n+1,0),B(n+1,0);
    for(int i=0;i<n;++i) cin>>A[i+1];
    for(int i=0;i<n;++i) cin>>B[i+1];
    for(int i=1;i<n;++i) {A[i+1]+=A[i];B[i+1]+=B[i];}
    int right=n;
    for(int i=0;i<=n&&t>=A[i];++i){
        while (A[i]+B[right]>t) --right;
        ans=max(ans,i+right);
    }
    cout<<ans;
    system("pause");
}*/