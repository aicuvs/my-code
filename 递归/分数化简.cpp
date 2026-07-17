/*#include<iostream>

using namespace std;

int divisor(int a,int b)
{
    if(b==0) return a;
    else return divisor(b,a%b);
}

int digit(int x)
{
    int i=0;
    while(x){
        x/=10;
        ++i;
    }
    return i;
}

int main()
{
    int a,b;
    char ch;
    cin>>a>>ch>>b;
    if(a%b==0){
        cout<<a/b;
        return 0;
    }
    int com=divisor(max(a,b),min(a,b));
    a/=com;b/=com;
    int num=a/b;a%=b;
    int lenA=digit(a),lenB=digit(b),lenNum=digit(num);
    for(int i=0;i<lenNum+lenB-lenA;++i) cout<<' ';
    cout<<a<<'\n';
    if(num) cout<<num;
    for(int i=0;i<lenB;++i) cout<<'-';
    cout<<'\n';
    for (int i = 0; i < lenNum; ++i) cout << ' ';
    cout<<b;
    system("pause");
}*/