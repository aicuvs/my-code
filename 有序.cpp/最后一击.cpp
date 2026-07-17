/*#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

int f(int A,int B)
{
    if(B==0) return A;
    return f(B,A%B);
}

int main()
{
    int n,A,B;
    cin>>n>>A>>B;
    int fac=f(max(A,B),min(A,B));
    A/=fac;B/=fac;
    int T=A+B+2;
    n%=T;
    if(T-n<4||n==0) {
        cout<<'C';
        return 0;
    }
    vector<pair<int,char>> time(A+B-2);
    for(int i=0;i<A-1;++i) {
        time[i].first=B*(i+1);
        time[i].second='A';
    }
    for(int i=A-1;i<A+B-2;++i){
        time[i].first=A*(i-A+2);
        time[i].second='B';
    }
    sort(time.begin(),time.end(),[](pair<int,char>&a,pair<int,char>&b){
        return a.first<b.first;
    });
    cout<<time[n-1].second;
    system("pause");
}*/