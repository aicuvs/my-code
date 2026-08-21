#include<iostream>

#include<stack>

using namespace std;

const int Mod=1000000007;

long long dfs()
{
    long long ans=0;
    while (cin.peek()=='(')
    {
        cin.get();
        if(cin.peek()==')') ans=(ans+1)%Mod;
        else ans=(ans+2*dfs())%Mod;
        cin.get();
    }
    return ans;
    
}

int main()
{
    cout << dfs() << '\n';
    return 0;
}