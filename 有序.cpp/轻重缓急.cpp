/*#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

int main()
{
    int n;
    long long ans=0;
    cin>>n;
    vector<pair<long long,long long>> tf(n);
    for(int i=0;i<n;++i) cin>>tf[i].first>>tf[i].second;
    sort(tf.begin(),tf.end(),[](pair<long long,long long>&a,pair<long long,long long>&b){
        return a.first*b.second<a.second*b.first;
    });
    for(int i=1;i<n;++i) tf[i].first+=tf[i-1].first;
    for(int i=0;i<n;++i) ans+=tf[i].first*tf[i].second;
    cout<<ans;
    system("pause");
}*/