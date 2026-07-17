/*#include<iostream>

#include<vector>

#include <algorithm>

using namespace std;

int main()
{
    int n,limit;
    cin>>n>>limit;
    vector<int> wei(n);
    for(int i=0;i<n;++i) cin>>wei[i];
    sort(wei.begin(),wei.end(),greater<int>());
    int right=n-1;
    for(int i=0;i<right;++i){
        if(wei[i]>=limit||wei[i]+wei[right]>limit) continue;
        else --right;
    }
    cout<<right+1;
    system("pause");


}*/