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
    int n,a,b,sum=0,cop=0,run=0;
    cin>>n;
    while(n-->0){
        cin>>a>>b;
        cop+=a;
        run=max(run+b,cop+b);
    }
    cout<<run;

}