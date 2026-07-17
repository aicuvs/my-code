/*#include<iostream>

#include<vector>

using namespace std;

int main()
{
    long long n,tmp1,tmp2;
    cin>>n;
    vector<long long> arr(n),freq_right(n),freq_left(n);
    for(int i=0;i<n;++i) cin>>arr[i];
    for(int i=1;i<n;++i) ++freq_right[arr[i]];
    long long add=0,sum=0;
    for(int i=1;i<n-1;++i){
        tmp1=freq_left[arr[i-1]]++;
        tmp2=freq_right[arr[i]]--;
        if(arr[i-1]!=arr[i]) add+=freq_right[arr[i-1]]-freq_left[arr[i]];
        else{
            add+=tmp2-tmp1-1;
            
        }
        sum+=add-freq_left[arr[i]]*freq_right[arr[i]];
        
    }
    cout<<sum;
    system("pause");
}*/