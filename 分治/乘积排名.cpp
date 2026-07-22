/*#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

long long count(const vector<int>& vec,long long mid)
{
    int len=vec.size();
    int lower=lower_bound(vec.begin(),vec.end(),0)-vec.begin();
    int upper=upper_bound(vec.begin(),vec.end(),0)-vec.begin();
    long long ans=0;
    if(mid<0){
        int j=upper;
        for(int i=0;i<lower;++i){
            while (j<len&&1LL*vec[i]*vec[j]>mid) ++j;
            ans+=len-j;
        }
        return ans;
    }
    ans+=1LL*lower*(len-upper);
    long long zeroCount=upper-lower;
    ans+=zeroCount*(len-zeroCount);
    ans+=zeroCount*(zeroCount-1)/2;
    int left=upper;
    int right=len-1;

    while(left<right){
        if(1LL*vec[left]*vec[right]<=mid){
            ans+=right-left;
            ++left;
        }
        else --right;
    }

    left=0;
    right=lower-1;
    while(left<right){
        long long small=-(long long)vec[lower-1-left];
        long long large=-(long long)vec[lower-1-right];
        if(small*large<=mid){
            ans+=right-left;
            ++left;
        }
        else --right;
    }
    return ans;
}

int main()
{
    int n;
    long long k;
    cin>>n>>k;
    vector<int> vec(n);
    for(int i=0;i<n;++i) cin>>vec[i];
    sort(vec.begin(),vec.end());
    long long firstTwo=1LL*vec[0]*vec[1];
    long long twoEnds=1LL*vec[0]*vec[n-1];
    long long lastTwo=1LL*vec[n-2]*vec[n-1];
    long long left=min({firstTwo,twoEnds,lastTwo});
    long long right=max({firstTwo,twoEnds,lastTwo});

    while (left<right)
    {
        long long mid=left+(right-left)/2;
        if(count(vec,mid)>=k) right=mid;
        else left=mid+1;
    }
    cout<<left;

}*/
