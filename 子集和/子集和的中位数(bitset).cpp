#include<iostream>
#include<bitset>

using namespace std;

bitset<2500*1500+1> s;
int N,sum=0;

int f()
{
    int x;
    s[0]=1;
    for(int i=0;i<N;++i){cin>>x;s|=s<<x;sum+=x;}
    for(int i=(sum+1)/2;;++i) if(s[i]) return i;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>N;
    cout<<f();
}
