/*#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> bor(n),ret(n);
    for(int i=0;i<n;++i) cin>>bor[i]>>ret[i];
    sort(bor.begin(),bor.end());
    sort(ret.begin(),ret.end());
    int i=0,j=0,ans=0,cur=0;
    while (i<n)
    {
        if(bor[i]<=ret[j]) {
            ++cur;++i;
            ans=max(ans,cur);
        }
        else{--cur;++j;}
    }
    cout<<ans;
    system("pause");
    
}*/