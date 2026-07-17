/*#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

int main()
{
    int n,time1=0,time2=0,ans=0;
    cin>>n;
    vector<pair<int,int>> program(n);
    for(int i=0;i<n;++i) cin>>program[i].first>>program[i].second;
    sort(program.begin(),program.end(),[](pair<int,int>&a,pair<int,int>&b){
        return a.second<b.second;
    });
    for(int i=0;i<n;++i){
        if(time1<=time2){
            if(program[i].first>=time2){
                ++ans;
                time2=program[i].second;
                continue;
            }
            if(program[i].first>=time1){
                ++ans;
                time1=program[i].second;
                continue;
            }
        }
        else{
            if (program[i].first >= time1){
                ++ans;
                time1 = program[i].second;
                continue;
            }
            if (program[i].first >= time2){
                ++ans;
                time2 = program[i].second;
                continue;
            }
        }
    }
    cout<<ans;
    system("pause");
}*/