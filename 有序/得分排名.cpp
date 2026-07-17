/*#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> grade(n);
    for(int i=0;i<n;++i) {
        grade[i].first=i+1;
        cin>>grade[i].second;
    }
    sort(grade.begin(),grade.end(),[](pair<int,int>&a,pair<int,int>&b){
        if(a.second!=b.second) return a.second>b.second;
        else return a.first<b.first;
    });
    for(int i=0;i<n;++i) cout<<grade[i].first<<'\n';
    system("pause");
}*/