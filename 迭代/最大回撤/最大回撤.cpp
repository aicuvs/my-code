#include<iostream>
int main()
{
  int n;
  std::cin >> n;
  int m = -1'000'000;
  int d = 0;
  while (n-->0) {
    int a;
    std::cin >> a;
    d = std::max(d, m - a);
    m = std::max(m, a);		
  }
  std::cout << d << "\n";
}