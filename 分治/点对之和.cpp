#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

long long f(vector<pair<int,int>> vec,int begin,int end)
{
    if(end-begin==1) return 0;
    int mid=(begin+end)/2;
    int l_sum=f(vec,begin,mid),r_sum=f(vec,mid,end);
    int l_len=mid-begin,r_len=end-mid;
    vector<int> l(l_len),r(r_len);
    for(int i=0;i<l_len;++i) l[i]=vec[i].second;
    for(int i=0;i<r_len;++i) r[i]=vec[i+mid].second;
    sort(l.begin(),l.end());
    sort(r.begin(),r.end());
    vector<long long> l_add(l_len),r_add(r_len);
    l_add[0]=l[0];r_add[0]=r[0];
    for(int i=1;i<l_len;++i) l_add[i]+=l_add[i-1]+l[i];
    for(int i=1;i<r_len;++i) r_add[i]+=r_add[i-1]+r[i];
    long long r_ans=0,l_ans=0;
    for(int i=0;i<r_len;++i){
        int index=upper_bound(l.begin(),l.end(),r[i])-l.begin();
    }
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> vec(n);
    for(int i=0;i<n;++i) cin>>vec[i].first>>vec[i].second;
    sort(vec.begin(),vec.end());

}
