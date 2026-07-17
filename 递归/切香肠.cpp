/*#include<iostream>

using namespace std;

int divisor(int a, int b)
{
    if (b == 0)
        return a;
    else
        return divisor(b, a % b);
}

int main()
{
    long long n,k;
    cin>>n>>k;
    n%=k;
    if(n==0) {
        cout<<0;
        return 0;
    }
    int num=divisor(k,n);
    n/=num;k/=num;
    cout<<(k-1)*num;
    system("pause");
    
}*/