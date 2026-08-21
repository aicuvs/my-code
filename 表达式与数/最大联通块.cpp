/*#include<iostream>

#include<vector>

using namespace std;

class tree
{
    struct node
    {
        long long weight;
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
        for(int i=0;i<n;++i) cin>>nodes[i].weight;
    
    }

    pair<long long, long long> dp(int k)
    {
        long long unlimit = 0;
        long long limit = nodes[k].weight;
        for (int child : nodes[k].son)
        {
            auto [childBest, childLimit] = dp(child);
            unlimit = max(unlimit, childBest);
            limit += childLimit;
        }

        limit = max(0LL, limit);
        unlimit = max(unlimit, limit);
        return {unlimit, limit};
    }
};
int main()
{
    int n;
    cin >> n;

    tree tr(n);
    cout << tr.dp(0).first << '\n';
}*/