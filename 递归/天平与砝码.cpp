/*#include<iostream>

#include<string>

using namespace std;

string f(int w,int t)
{
    if(t==0) return "Yes";
    if(t%w==0||t%w==1) return f(w,t/w);
    if(t%w==w-1) return f(w,t/w+1);
    return "No";
}

int main()
{
    int w,t;
    cin>>w>>t;
    cout<<f(w,t);
    system("pause");
    
}*/