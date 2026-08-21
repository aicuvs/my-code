/*#include<iostream>

#include<string>

using namespace std;

string f(const string& pre,const string& mid)
{
    char ch;
    ch=pre[0];
    int left=0,right;
    for(int i=0;mid[i]!=ch;++i) left=i+1;
    right=pre.size()-left-1;
    string l,r;
    if(left<=1) l=pre.substr(1,left);
    else l=f(pre.substr(1,left),mid.substr(0,left)); 
    if(right<=1) r=pre.substr(left+1,right);
    else r=f(pre.substr(left+1,right),mid.substr(left+1,right));
    return l+r+ch;
}

int main()
{
    string pre,mid;
    cin>>pre>>mid;
    cout<<f(pre,mid);
    system("pause");

}*/