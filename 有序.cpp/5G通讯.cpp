/*#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;

int main()
{
    int n, d;
    long long ans=0;
    cin >> n >> d;
    vector<int> ind(n);
    for (int i = 0; i < n; ++i)
        cin >> ind[i];
    sort(ind.begin(), ind.end());
    int left = 0;
    for(int i=1;i<n;++i){
        while(ind[i]-ind[left]>d) ++left;
        ans+=i-left;
    }
    
    cout << ans;
    system("pause");
}*/