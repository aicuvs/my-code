#include<iostream>
#include<bitset>

using namespace std;

bitset<200001> s;
int N;

int f()
{
    int x;
    s[100000]=1;
    for(int i=0;i<N;++i){cin>>x;s=s|s<<x|s>>x;}
    return (s.count()-1)/2;
}

int main()
{
    cin>>N;
    cout<<f();
}