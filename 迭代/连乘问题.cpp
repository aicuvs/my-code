/*#include<iostream>

#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> vec,front,back;
    vec.resize(n);
    front.resize(n);
    back.resize(n);
    for(int i=0;i<n;++i) cin>>vec[i];
    front[0]=1;
    back[0]=1;
    for(int i=1;i<n;++i) front[i]=vec[i-1]*front[i-1]%10000;
    for(int i=1;i<n;++i) back[i]=vec[n-i]*back[i-1]%10000;
    for(int i=0;i<n;++i){
        cout<<front[i]*back[n-i-1]%10000<<'\n';
    }
    system("pause");

}*/
