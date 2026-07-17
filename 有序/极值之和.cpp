/*#include<iostream>

#include<stack>

using namespace std;

int main()
{
    int n;
    long long ans=0,cur=0,tmp,sum;
    cin>>n;
    stack<pair<long long,long long>> add;
    for(int i=0;i<n;++i){
        cin>>tmp;
        sum=0;
        while (!add.empty()&&add.top().first<=tmp)
        {
            sum+=add.top().second;
            cur-=add.top().first*add.top().second;
            add.pop();
        }
        add.push({tmp,sum+1});
        cur+=tmp*(sum+1);
        ans+=cur;
    }
    cout<<ans;
    system("pause");
}*/