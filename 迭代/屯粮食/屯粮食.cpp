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
    int n,c,x,price=1e9,sum=0;
    cin>>n>>c;
    while(n-->0){
        cin>>x;
        price=min(price,x);
        sum+=price;
        price+=c;
    }
    cout<<sum;
}