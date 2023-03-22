#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int x, y;
    vector<pair<int, int>> v;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end());

    for (auto a : v)
        cout << a.first << ' ' << a.second << '\n';
}