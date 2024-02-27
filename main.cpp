#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll n, m;
vl B;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> m;

  B = vl(n);
  for (auto&& x : B) {
    cin >> x;
  }

  auto ans = 0LL;
  auto now = 0LL;
  for (auto i = 0; i < n; ++i) {
    if (now + B[i] <= m) {
      now += B[i];
      continue;
    }

    ++ans;
    now = B[i];
  }
  
  if (0 < now) {
    ++ans;
  }

  cout << ans;

  return 0;
}