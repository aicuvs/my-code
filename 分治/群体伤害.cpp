#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

int main()
{
    int n,A,B;
    cin>>n>>A>>B;
    vector<int> vec(n);
    for(int i=0;i<n;++i) cin>>vec[i];
    sort(vec.begin(),vec.end(),greater<int>());
    while (vec[0]>0)
    {
        vec[0]-=A;
        for(int i=1;i<n;++i) vec[i]-=B;
         
    }
    
}