/*#include<iostream>

#include<vector>

using namespace std;

int f(int n,vector<int>& sum){
    if(n==1) return sum[0];
    else{
        int tmp=f(n-1,sum);
        return max(tmp,sum[n-1]-tmp);
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> core(n),sum(n);
    for(int i=0;i<n;++i) cin>>core[i];
    sum[0]=core[n-1];
    for(int i=1;i<n;++i) sum[i]=sum[i-1]+core[n-1-i];
    cout<<f(n,sum);
    system("pause");

}*/