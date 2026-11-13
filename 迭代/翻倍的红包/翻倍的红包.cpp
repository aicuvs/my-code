#include<iostream>

#include<stack>

#include<algorithm>

#include<string>

#include<vector>

#include<numeric>

#include<queue>

#include<cstring>

using namespace std;



int main()
{
    long long N,A,e=0,o,tmp;
    cin>>N>>o;
    while(--N>0){
        cin>>A;
        tmp=e;
        e=max(e,o+2*A);
        o=max(o,tmp+A);
    }
    cout<<max(e,o);
}