/*#include<iostream>

using namespace std;

long long f(int *arr,int begin,int end)
{
    int mid=(begin+end)/2;
    long long left=0,right=0,cur=0;
    if(end-begin>1) left=f(arr,begin,mid),right=f(arr,mid,end);
    int *tmp=new int[end-begin],le_in=begin,ri_in=mid,ind=0;
    while (le_in<mid&&ri_in<end)
    {
        if(arr[le_in]<=arr[ri_in]) tmp[ind]=arr[le_in++];
        else {
            tmp[ind]=arr[ri_in++];
            cur+=mid-le_in;
        }
        ++ind;   
    }
    for(int i=le_in;i<mid;++i) tmp[ind++]=arr[i];
    for(int i=ri_in;i<end;++i) tmp[ind++]=arr[i];
    for(int i=begin;i<end;++i) arr[i]=tmp[i-begin];
    delete [] tmp;
    return cur+left+right;
}
 
int main()
{
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    cout<<f(arr,0,n);
    system("pause");
}*/
