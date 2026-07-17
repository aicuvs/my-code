/*#include<iostream>

#include<string>

#include<vector>

#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> nums(n);
    for(int i=0;i<n;++i) cin>>nums[i];
    sort(nums.begin(),nums.end(),[](string a,string b){
        return a+b>b+a;
    });
    for(int i=0;i<n;++i) cout<<nums[i];
    system("pause");
}*/