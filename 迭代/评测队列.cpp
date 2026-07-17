/*#include<iostream>

#include<vector>

using namespace std;

int main()
{
    int n,tmp;
    cin>>n;
    vector<int> compile,run;
    compile.resize(n);
    run.resize(n);
    for(int i=0;i<n;++i) {
        cin>>compile[i];
        if(i>0) compile[i]+=compile[i-1];
        cin>>tmp;
        if(i==0) run[0]=tmp;
        else{run[i]=(compile[i]+tmp>run[i-1]+tmp)?compile[i]+tmp:run[i-1]+tmp;}
    }
    cout<<run[n-1];
    system("pause");


}*/