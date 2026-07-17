/*#include<iostream>

#include<algorithm>

#include<vector>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> N(n),M(m);
    for(int i=0;i<n;++i) cin>>N[i];
    for(int i=0;i<m;++i) cin>>M[i];
    sort(N.begin(),N.end());
    for(int i=0;i<m;++i){
        auto ind=lower_bound(N.begin(),N.end(),M[i]);
        if(ind==N.begin()) cout<<N[0]-M[i]<<'\n';
        else{
            if(ind==N.end()) cout<<M[i]-N[n-1]<<'\n';
            else cout<<min(*ind-M[i],M[i]-*(ind-1))<<'\n';
        }
        
    }
    system("pause");
}*/