/*#include<iostream>

#include<algorithm>

#include<vector>

using namespace std;

int main()
{
    int N,core1=0,core2=0,core3=0,t1,t2,t3;
    cin>>N;
    vector<int> A;
    A.resize(N);
    for(int i=0;i<N;++i) cin>>A[i];
    for(int i=0;i<N;++i){
        t1=core1;
        t2=core2;
        t3=core3;
        core1=max({t1,t2,t3});
        core2=max({t1+A[i],t2+A[i]});
        core3=max({t1+2*A[i],t2+2*A[i]});
    }
    cout<<max({core1,core2,core3});
    system("pause");
}*/