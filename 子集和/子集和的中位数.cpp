/*#include<iostream>

#include<vector>

#include<numeric>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;++i) cin>>vec[i];
    int Max=accumulate(vec.begin(),vec.end(),0);
    vector<int> sum(Max+1,0),cop;
    for(int i=0;i<n;++i){
        cop=sum;
        for(int j=0;j<=Max-vec[i];++j) cop[j+vec[i]]+=sum[j];
        ++cop[vec[i]];
        sum=cop;
    }
    int index=0;
    for(int i=0;i<1<<(n-1);++i){
        while (sum[index]==0) ++index;
        --sum[index];
    }
    cout<<index;
    system("pause");
}*/