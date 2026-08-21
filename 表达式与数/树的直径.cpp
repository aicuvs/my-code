/*#include<iostream>

#include<vector>

using namespace std;

class sbtree
{
    vector<int> bro,son;
    public:
    sbtree(int n):bro(n+1,0),son(n+1,0)
    {
        for(int a=2;a<=n;++a){
            int p;
            cin>>p;
            link(a,p);
        }
    }

    void link(int a,int p)
    {
        bro[a]=son[p];
        son[p]=a;
    }

    pair<int,int> dfs(int root)
    {
        int maxs=0,maxd=0,maxp=0;
        for(int v=son[root];v!=0;v=bro[v]){
            auto [d,p]=dfs(v);
            maxs=max(maxs,d);
            maxd=max(maxd,maxp+p+1);
            maxp=max(maxp,p+1);
        }
        return {max(maxs,maxd),maxp};
    }

};



int main()
{
    int n;
    cin>>n;
    sbtree sb(n);
    auto [diameter, height] = sb.dfs(1);
    cout << diameter;
}*/