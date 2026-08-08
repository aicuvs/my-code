#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> A;
int N;

void g(int begin,int end,vector<long long>&sum,long long cur)
{
    if(begin==end) {
        sum.push_back(cur);
        return;
    }
    g(begin+1,end,sum,cur);
    g(begin+1,end,sum,cur+A[begin]);
}

long long f(int begin,int end)
{
    if(begin==end) return 0;
    int mid=(begin+end)/2;
    long long ans=0;
    vector<long long> l_sum,r_sum;
    g(begin,mid,l_sum,0);
    g(mid,end,r_sum,0);
    sort(l_sum.begin(),l_sum.end());
    sort(r_sum.begin(),r_sum.end());
    int right=r_sum.size()-1;
    for(int i=0;i<l_sum.size();++i){
        while(right>=0&&l_sum[i]+r_sum[right]>0) --right;
        ans+=r_sum.size()-1-right;
    }
    return ans;
}

int main()
{
    cin>>N;
    A.resize(N);
    for(int i=0;i<N;++i) cin>>A[i];
    cout<<f(0,N);
}