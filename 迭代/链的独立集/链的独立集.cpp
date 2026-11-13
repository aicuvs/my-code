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
    int n,x,inc=0,exc=0,tmp;
    cin>>n;
    while(n-->0){
        cin>>x;
        tmp=inc;
        inc=exc+x;
        exc=max(tmp,exc);
    }
    cout<<max(inc,exc);
}