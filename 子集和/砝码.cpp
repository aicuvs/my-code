/*#include<iostream>

#include<vector>

#include<numeric>

using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;++i) cin>>vec[i];
    int sum=accumulate(vec.begin(),vec.end(),0);
    vector<bool> wei(2*sum+1,false),cop;
    wei[sum]=true;
    for(int i=0;i<n;++i){
        cop=wei;
        for(int j=vec[i];j<=2*sum-vec[i];++j) {
            cop[j-vec[i]]=cop[j-vec[i]]||wei[j];
            cop[j+vec[i]]=cop[j+vec[i]]||wei[j];
        }
        wei=cop;
    }
        
    for(int i=sum+1;i<=2*sum;++i) ans+=wei[i];
    cout<<ans;
    system("pause");    
    
}*/