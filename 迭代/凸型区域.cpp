/*#include <iostream>

#include <vector>

using namespace std;

const long long INF = 4e18;

int main()
{
    int n;
    cin >> n;
    vector<long long> up(n), low(n);
    for (int i = 0; i < n; ++i)
        cin >> up[i];
    for (int i = 0; i < n; ++i)
        cin >> low[i];
    for (int i = 1; i < n; ++i)
    {
        up[i] += up[i - 1];
        low[i] += low[i - 1];
    }
    vector<long long> best_right(n);
    long long low_best_right = -INF;
    for (int i = n - 2; i > 0; --i)
    {
        low_best_right = max(low_best_right, low[i + 1]);
        best_right[i] = up[i] + low_best_right;
    }
    vector<long long> best_left(n);
    long long low_best_left = 0;
    best_left[1] = -up[0];
    for (int i = 2; i < n - 1; ++i)
    {
        low_best_left = max(low_best_left, -low[i - 2]);
        best_left[i] = -up[i - 1] + low_best_left;
    }
    long long cur_best_left = -INF;
    for (int i = 1; i < n - 1; ++i)
    {
        cur_best_left = max(cur_best_left, best_left[i]);
        best_left[i] = cur_best_left;
    }
    long long ans = -INF;
    for (int i = 1; i < n - 1; ++i)
    {
        ans = max(ans, best_right[i] + best_left[i]);
    }
    cout << ans;
}*/