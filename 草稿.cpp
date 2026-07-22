/*#include <iostream>

#include <iostream>

using namespace std;

char f(string str, int len, long long n)
{
    if (n < len)
        return str[n];
    long long i = len;
    while (2 * i - 1 < n)
        i *= 2;
    n -= i;
    if (n == 0)
        return f(str, len, i - 1);
    return f(str, len, n - 1);
}

int main()
{
    string str;
    cin >> str;
    long long n;
    cin >> n;
    --n;
    int len = str.size();
    cout << f(str, len, n);
    system("pause");
}*/