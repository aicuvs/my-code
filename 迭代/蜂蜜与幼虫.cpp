/*#include<vector>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<long long> sum;
    sum.resize(N);
    sum[0]=1;
    sum[1]=2;
    sum[2]=4;
    sum[3]=8;
    for(int i=4;i<N;++i) sum[i]=(sum[i-4]+sum[i-3]+sum[i-2]+sum[i-1])%1000000007;
    cout<<sum[N-1];
}*/