/*#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

class tree
{
    struct node
    {
        vector<int> son;
    };
    vector<node> nodes;
    public:
    tree (int n):nodes(n)
    {
        for(int i=2;i<=n;++i){
            int p;
            cin>>p;
            nodes[p-1].son.push_back(i-1);
        }
    }

    pair<long long,long long> dp(int k)
    {
        if(nodes[k].son.empty()){return{1,1};}
        int len=nodes[k].son.size();
        long long inc=1,exc=1;
        for(int i=0;i<len;++i){
            auto [d,p]=dp(nodes[k].son[i]);
            inc*=p;
            exc*=d+p;
            inc%=1000000007;exc%=1000000007;
        }
        return {inc,exc};
    }
};

int main()
{
    int n;
    cin>>n;
    tree tr(n);
    auto [d,p]=tr.dp(0);
    int ans=(d+p)%1000000007;
    cout<<ans;
    system("pause");
}*/