/*#include<iostream>

using namespace std;

int main()
{
    int n,k,tmp,inc=0,exc=0;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>k;
        if(k>0){
            tmp=inc;
            inc=exc+k;
            exc=max(tmp,exc);
        }
        else
            inc=exc=max(inc, exc);
    }
    cout<<(inc>exc?inc:exc);
    system("pause");
}*/