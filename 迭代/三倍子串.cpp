/*#include<iostream>

#include<string>

#include<vector>

using namespace std;

int main()
{
    int t0,t1,t2,sum=0;
    vector<int> mod={0,0,0};
    string str;
    cin>>str;
    int len=str.size(),tmp;
    for(int i=0;i<len;++i){
        tmp=(str[i]-'0')%3;
        t0=mod[0];
        t1=mod[1];
        t2=mod[2];
        if(tmp==0) {
            ++mod[0];
            sum+=mod[0];
        }
        if(tmp==1) {
            mod[0]=t2;
            mod[1]=t0+1;
            mod[2]=t1;
            sum+=mod[0];
        }
        if(tmp==2){
            mod[0]=t1;
            mod[1]=t2;
            mod[2]=t0+1;
            sum+=mod[0];
        }
    }
    cout<<sum;
    system("pause");

}*/
