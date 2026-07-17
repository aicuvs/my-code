/*#include<iostream>

#include<string>

#include<vector>

using namespace std;

int main()
{
    string grey;
    cin>>grey;
    int len=grey.size();
    long long ans=0;
    vector<int> twobase(len);
    twobase[0]=grey[0]-'0';
    for(int i=1;i<len;++i) twobase[i]=(twobase[i-1]+grey[i]-'0')%2;
    for(int i=0;i<len;++i) ans=2*ans+twobase[i];
    cout<<ans;
    system("pause");
    

}*/