/*#include<iostream>

using namespace std;

int main()
{
    long long n,odd,even=0,tmp,tmp1;
    cin>>n;
    cin>>odd;
    for(long long i=1;i<n;++i){
        cin>>tmp;
        tmp1=odd;
        odd=max(odd,even+tmp);
        even=max(even,tmp1+2*tmp);
    }
    cout<<max(odd,even);
    system("pause");
}*/