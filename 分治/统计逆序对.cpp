/*#include<iostream>

#include<stack>

#include<algorithm>

#include<string>

#include<vector>

#include<numeric>

using namespace std;

long long f(int *N,int begin,int end)
{
    if(end-begin==1) return 0;
    int mid=(begin+end)/2;
    long long l_ans=f(N,begin,mid),r_ans=f(N,mid,end);
    int l_index=begin,r_index=mid,index=0,*tmp=new int[end-begin];
    long long ans=0;
    while(l_index<mid&&r_index<end){
        if(N[l_index]<=N[r_index]) tmp[index++]=N[l_index++];
        else{
            tmp[index++]=N[r_index++];
            ans+=mid-l_index;
        }
    }
    for(int i=l_index;i<mid;++i) tmp[index++]=N[i];
    for(int i=r_index;i<end;++i) tmp[index++]=N[i];
    for(int i=begin;i<end;++i) N[i]=tmp[i-begin];
    delete [] tmp;
    return l_ans+r_ans+ans;
}

int main()
{
    int n;
    cin>>n;
    int *N=new int[n];
    for(int i=0;i<n;++i) cin>>N[i];
    cout<<f(N,0,n);

}*/