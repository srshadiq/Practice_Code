#include <bits/stdc++.h>
using namespace std;

int leap(int year)
{
  int ans = year / 4;
  ans -= year / 100;
  ans += year / 400;
  return ans;
}

int CountLeap(int FY, int EY)
{
  return leap(EY) - leap(FY - 1);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t, cs = 0;
  cin >> t;
  while (t--)
  {
    char c;
    string FM;
    int FD, FY;
    cin >> FM >> FD;
    cin >> c;
    cin >> FY;

    string EM;
    int ED, EY;
    cin >> EM >> ED;
    cin >> c;
    cin >> EY;

    if (FM == "January" or FM == "February")
    {
    }
    else
    {
      FY++;
    }

    if (EM == "January" or (EM == "February" and ED < 29))
    {
      EY--;
    }

    cout << "Case " << ++cs << ": " << CountLeap(FY, EY) << '\n';
  }
  return 0;
}