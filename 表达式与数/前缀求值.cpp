/*#include<iostream>

#include<stack>

#include<algorithm>

#include<string>

#include<vector>

#include<numeric>

using namespace std;

int f()
{
    char ch;
    cin>>ch;
    if(ch=='0'||ch=='1') return ch-'0';
    if(ch=='&') return f()&f();
    if(ch=='|') return f()|f();
    if(ch=='^') return f()^f();
}

int main()
{
    cout<<(f()?"true":"false");

}*/