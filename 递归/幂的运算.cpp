/*#include<iostream>

using namespace std;

int f(int a,long long b,int c)
{
    if(b==1) return a%c;
    if(b%2==0) return f(1LL*a*a%c,b/2,c);
    else{return 1LL*a*f(a,b-1,c)%c;}
}


int main()
{
    int a,c;
    long long b;
    cin>>a>>b>>c;
    cout<<f(a,b,c);
    system("pause");

}*/