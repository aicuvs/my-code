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
    int n;

    public:
    tree(int n):nodes(n),n(n)
    {
        for(int i=2;i<=n;++i){
            int p;
            cin>>p;
            nodes[p-1].son.push_back(i-1);
        }
    }

    pair<int,int> dp(int k)
    {
        int son_size=1,max_son=0,cur_p=n-1;
        for(int child:nodes[k].son){
            auto[d,p]=dp(child);
            cur_p=min(cur_p,p);
            son_size+=d;
            max_son=max(max_son,d);
        }
        max_son=max(max_son,n-son_size);
        return {son_size,min(cur_p,max_son)};
    }

};

int main()
{
    int n;
    cin >> n;

    tree tr(n);
    cout << tr.dp(0).second << '\n';
}*/