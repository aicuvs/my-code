#include<iostream>
using namespace std;

const int MAX=300000;
long long c[MAX],s[MAX];

int main()
{
    int N,A;
    cin>>N;
    long long ans=0;
    for(int i=0;i<N;++i){
        cin>>A;
        ans+=c[A]*(i-1)-s[A]-c[A]*(c[A]-1)/2;
        ++c[A];
        s[A]+=i;
    }
    cout<<ans;
}