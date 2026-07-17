/*#include<iostream>

using namespace std;

pair<int,int> f(int n,int k)
{
    pair<int,int> ans;
    if(k<2*n){
        if(k<=n) {
            ans.first=1;
            ans.second=k;
            return ans;
        }
        else{
            ans.first=k-n+1;
            ans.second=n;

            return ans;
        }
    }
    else {
        ans=f(n-1,k-2*n+1);
        ans.first=n+1-ans.first;
        ans.second=n-ans.second;
        return ans;
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<f(n,k).first<<' '<<f(n,k).second;
    system("pause");
}*/
