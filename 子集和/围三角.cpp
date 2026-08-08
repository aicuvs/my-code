#include<iostream>
#include<vector>
using namespace std;

int N;
long long S[41][1601][1601];
vector<int> vec;
int sum=0;

long long f(int i,int a,int b)
{
    if(S[i][a][b]>0) return S[i][a][b];
    int c=sum-a-b;
    if(i==N){
        if(a+b>c&&a+c>b&&b+c>a) return S[i][a][b]=1LL*sum*(sum-2*a)*(sum-2*b)*(sum-2*c)+1;
        else return S[i][a][b]=1;
    }
    else return S[i][a][b]=max({f(i+1,a+vec[i],b),f(i+1,a,b+vec[i]),f(i+1,a,b)});

}

int main()
{
    cin>>N;
    vec.resize(N);
    for(int i=0;i<N;++i) {cin>>vec[i];sum+=vec[i];}
    cout<<f(0,0,0)-1;
}