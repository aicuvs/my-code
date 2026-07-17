/*#include<iostream>

#include<queue>

using namespace std;

int main()
{
    int n,m,ans=0,p,c,tmp;
    cin>>n>>m;
    m++;
    queue<int> remain;
    for(int i=0;i<n;++i){
        cin>>p>>c;
        remain.push(p);
        if(remain.size()>m) remain.pop();
        while (c&&!remain.empty())
        {
            tmp=remain.front();
            if(tmp>=c) {
                ans+=c;
                remain.front()-=c;
                break;
            }
            else{
                ans+=tmp;
                c-=tmp;
                remain.pop();
            }
        }
        
    
    }
    cout<<ans;
    system("pause");
}*/