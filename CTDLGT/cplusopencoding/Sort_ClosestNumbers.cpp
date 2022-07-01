#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; cin >> N;
    vector<int> v; v.reserve(N);
    copy_n(istream_iterator<int>(cin), N, back_inserter(v));
    sort(begin(v), end(v));
    auto minDiff = inner_product(next(begin(v)), end(v), begin(v), numeric_limits<int>::max(),
                  [](int curr, int nxt){ return min(curr, nxt); },
                  minus<>{}
    );
    equal(begin(v), end(v)-1, begin(v)+1, [=](int l, int r){
       if (abs(r-l) == minDiff)
           cout << l << " " << r << " ";
       return true;
    });
}