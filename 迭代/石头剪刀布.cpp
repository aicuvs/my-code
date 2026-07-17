/*#include<iostream>

#include<string>

#include<vector>

#include<algorithm>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int len=str.size(),t1,t2,t3;
    vector<int> R,S,P;
    R.resize(len+1);
    S.resize(len+1);
    P.resize(len+1);
    R[0]=S[0]=P[0]=0;
    for(int i=1;i<=len;++i){
        t1=R[i-1];
        t2=S[i-1];
        t3=P[i-1];
        if(str[i-1]=='R'){
            R[i]=max(S[i-1],P[i-1]);
            S[i]=-300000;
            P[i]=max(R[i-1],S[i-1])+1;
        }
        if(str[i-1]=='S'){
            R[i]=max(S[i-1],P[i-1])+1;
            S[i]=max(R[i-1],P[i-1]);
            P[i]=-300000;
        }
        if(str[i-1]=='P'){
            R[i]=-300000;
            S[i]=max(R[i-1],P[i-1])+1;
            P[i]=max(R[i-1],S[i-1]);
        }

        
    }
    cout<<max({R[len],S[len],P[len]});
    system("pause");


}*/