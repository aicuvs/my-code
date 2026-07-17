/*#include<iostream>

#include<vector>

using namespace std;

int main()
{
    int n,Max,cur=0;
    cin>>n;
    vector<int> vec;
    vec.resize(n);
    for(int i=0;i<n;++i) cin>>vec[i];
    Max=vec[0];
    for(int i=1;i<n;++i) {
        Max=(Max>vec[i])?Max:vec[i];
        cur=(Max-vec[i]>cur)?Max-vec[i]:cur;
    }
    cout<<cur;
    system("pause");
    


}*/