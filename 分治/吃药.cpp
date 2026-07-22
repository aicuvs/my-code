/*#include<iostream>

#include<vector>

using namespace std;

int f(vector<int>& effect,int mid)
{
    int m=effect.size(),cur=0,day=0;
    for(int i=0;i<m;++i){
        if(cur<mid) {
            cur+=effect[i];
            while (cur>=mid)
            {
                cur/=2;
                ++day;
            }
        }
    }
    return day;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> effect(m);
    for(int i=0;i<m;++i) cin>>effect[i];
    int mi=0,ma=1,mid;
    for(int i=0;i<m;++i) ma+=effect[i];
    while (ma-mi>1)
    {
        mid=(ma+mi)/2;
        if(f(effect,mid)>=n) mi=mid;
        else ma=mid;
    }
    cout<<mi;
    system("pause");
    return 0;
}*/