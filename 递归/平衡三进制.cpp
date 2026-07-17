/*#include <iostream>

#include <string>

#include <cmath>

using namespace std;

string trans(long long x)
{
    if (x)
    {
        if (x % 3 <0) return trans((x-1) / 3) + char(x%3==-1?'z':1+'0');
        else if(x%3>0) return trans((x+1)/3) + char(x%3==1?1+'0':'z');
        else return trans(x/3)+'0';
    }
    else return "";
}

int main()
{
    long long num;
    cin >> num;
    if(num==0) cout<<'0';
    cout << trans(num);
    system("pause");
}*/