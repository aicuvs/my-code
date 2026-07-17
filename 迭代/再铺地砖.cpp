/*#include<iostream>  

#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    n*=2;
    vector<long long> sum;
    sum.resize(n);
    sum[0]=1;
    sum[1]=2;
    sum[2]=3;
    sum[3]=7;
    for(int i=4;i<n;++i) {
        if(i%2==0){
            sum[i]=(sum[i-1]+sum[i-2])%1000000007;
        }
        else sum[i]=(sum[i-1]+sum[i-2]+sum[i-3]+sum[i-4])%1000000007;
    }
    cout<<sum[n-1];
    system("pause");

}*/