/*#include<iostream>

#include<string>

#include<algorithm>

using namespace std;

const int mod=1000000007;

pair<long long,long long> f(string &str,int &index)
{
    char ch=str[index++];
    if(ch=='0') return {1,0};
    if(ch=='1') return {0,1};
    if(ch=='?') return {1,1};
    auto right=f(str,index);
    auto left=f(str,index);
    if(ch=='&') return {(left.first*right.first+left.first*right.second+left.second*right.first)%mod,left.second*right.second%mod};
    if(ch=='|') return {left.first*right.first%mod,(left.first*right.second+left.second*right.first+left.second*right.second)%mod};
    return {(left.first*right.first+left.second*right.second)%mod,(left.first*right.second+left.second*right.first)%mod};
}

int main()
{
    string str;
    cin>>str;
    reverse(str.begin(),str.end());
    int index=0;
    cout<<f(str,index).first;
    system("pause");
}*/
