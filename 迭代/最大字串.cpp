#include<iostream>

#include<vector>

using namespace std;

int main()
{
    int n,s=0,m=0,a;
    cin>>n;
    while(n-->0){
        cin>>a;
        s=max(a,s+a);
        m=max(m,s);
    }
    cout<<m;
    system("pause");


}