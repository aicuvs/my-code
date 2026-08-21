/*#include<iostream>

#include<vector>

using namespace std;

class tree
{
    struct node
    {
        vector<int> son;
    };
    vector<node> nodes;

    public:
    tree(int n):nodes(n)
    {
        for(int i=2;i<=n;++i){
            int p;
            cin>>p;
            nodes[p-1].son.push_back(i-1);
        }
    }

    pair<long long,long long> dp(int k)
    {
        long long unlimit=0,limit=1;
        for(int child:nodes[k].son){
            auto [d,p]=dp(child);
            unlimit+=d;
            limit*=p;
            unlimit%=1000000007;limit%=1000000007;
        }
        unlimit+=limit++;
        unlimit %= 1000000007;
        limit %= 1000000007;
        return {unlimit,limit};
    }
    
};

int main()
{
    int n;
    cin >> n;

    tree tr(n);
    cout << tr.dp(0).first << '\n';
}*/