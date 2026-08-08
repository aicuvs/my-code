#include<iostream>
#include<bitset>

using namespace std;

constexpr int MAX_NUM=300000;
bitset<MAX_NUM+1> s;
int N,T;

bool f()
{
    int x;
    s[0]=1;
    for(int i=0;i<N;++i) {cin>>x;s|=s<<x;}
    return s[T];
}

int main()
{
    cin>>N>>T;
    cout<<(f()?"Yes":"No");
}
