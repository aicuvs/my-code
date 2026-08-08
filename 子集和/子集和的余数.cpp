/*#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

void get_mod(vector<int>& vec,int begin,int end,int mod,int m,vector<int>& mods)
{
    if(begin==end){
        mods.push_back(mod);
        return;
    }
    get_mod(vec,begin+1,end,mod,m,mods);
    get_mod(vec,begin+1,end,(mod+vec[begin])%m,m,mods);
}

int f(vector<int> vec,int begin,int end,int m)
{
    int mid=(begin+end)/2;
    vector<int> l_mod,r_mod;
    get_mod(vec,begin,mid,0,m,l_mod);
    get_mod(vec,mid,end,0,m,r_mod);
    sort(r_mod.begin(),r_mod.end());
    int ans=0;
    for(int x:l_mod){
        auto pos=lower_bound(r_mod.begin(),r_mod.end(),m-x);
        ans=max(ans,x+*(pos-1));
    }
    return ans;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> vec(n);
    for(int i=0;i<n;++i) cin>>vec[i];
    cout<<f(vec,0,n,m);
    system("pause");

}*/