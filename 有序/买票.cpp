/*#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> age(n);
    for(int i=0;i<n;++i) cin>>age[i];
    sort(age.begin(),age.end(),greater<int>());
    int j=n/2,ans=n;
    int tmp=j;
    for(int i=0;i<n/2;++i){
        while (j<n&&age[j]>age[i]/2) ++j;
        if(j<n) {++j;--ans;}
    }
    cout<<ans;
    system("pause");
}*/