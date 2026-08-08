/*#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) cin >> vec[i];
    vector<bool> dp(t + 1, false);
    dp[0] = true;
    for (int i = 0; i < n; ++i) {
        if (vec[i] > t) continue;
        for (int j = t; j >= vec[i]; --j) {
            if (dp[j - vec[i]]) {
                dp[j] = true;
            }
        }
        if (dp[t]) break;
    }
    cout<<(dp[t]?"Yes":"No");
}*/