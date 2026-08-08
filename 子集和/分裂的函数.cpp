#include<iostream>

#include<map>

using namespace std;

map<long long,long long> memo{{1,0}};

long long f(long long n)
{
    auto it=memo.find(n);
    if(it!=memo.end()) return it->second;
    return memo[n]=f(n/2)+f((n+1)/2)+n;
}

int main()
{
    long long n;
    cin>>n;
    cout<<f(n);
    system("pause");
}