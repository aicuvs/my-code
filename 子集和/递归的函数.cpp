#include<iostream>

#include<map>

using namespace std;

map<long long, long long> memo{{0,1}};

long long f(long long n)
{
    auto it=memo.find(n);
    if(it!=memo.end()) return it->second;
    return memo[n]=f(n/3)+f(n/2);
}

int main()
{
    long long n;
    cin>>n;
    cout<<f(n);
    system("pause");
}