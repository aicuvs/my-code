#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    string S,T;
    cin>>S>>T;
    int len_s=S.size(),len_t=T.size(),pre,tmp;
    vector<int> vec(len_t+1,1);
    for(int i=1;i<=len_s;++i){
        pre=1;
        for(int j=1;j<=len_t;++j){
            if(S[i-1]==T[j-1]){
                pre=vec[j];
                vec[j]+=vec[j-1];
                vec[j]%=1000000007;
            }
            else{
                tmp=pre;
                pre=vec[j];
                vec[j]=vec[j]+vec[j-1]-tmp;
                vec[j]%=1000000007;
            }
        }
    }
    cout<<((vec[len_t]-1)%1000000007+1000000007)%1000000007;
}
