#include <iostream>
#include <vector>

using namespace std;

int n, C;

int main()
{
    cin >> n >> C;
    vector<vector<long long>> memo(n + 1, vector<long long>(C + 1));
    long long weight, value;
    for (int i = 1; i <= n; ++i)
    {
        cin >> weight >> value;
        for (int j = 1; j <= C; ++j)
        {
            if (j >= weight)
                memo[i][j] = max(memo[i - 1][j - weight] + value, memo[i - 1][j]);
            else
                memo[i][j] = memo[i - 1][j];
        }
    }
    cout << memo[n][C];
}
