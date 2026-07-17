/*#include<iostream>

#include<string>

using namespace std;

string f(long long n)
{
    if(n==-1) return "";
    if(n==0) return "6";
    if(n==1) return "8";
    return f((n-2)/2)+char(n%2*2+6+'0');
}

int main()
{
    long long n;
    cin>>n;
    n--;
    cout<<f(n);
    system("pause");


}*/