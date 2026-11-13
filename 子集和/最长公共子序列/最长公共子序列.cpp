#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    string S,T;
    cin>>S>>T;
    int len_s=S.size(),len_t=T.size(),pre,tmp;
    vector<int> vec(len_t+1,0);
    for(int i=1;i<=len_s;++i){
        pre=0;
        for(int j=1;j<=len_t;++j){
            if(S[i-1]==T[j-1]){
                tmp=pre;
                pre=vec[j];
                vec[j]=tmp+1;
            }
            else{
                pre=vec[j];
                vec[j]=max(vec[j-1],vec[j]);
            }
        }
    }
    cout<<vec[len_t];

}