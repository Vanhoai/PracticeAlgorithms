#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int TC;
    cin >> TC;
    while (TC--) {
        int n;
        cin >> n;

        priority_queue<int, vector<int>, greater<int>> q;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            q.push(x);
        }

        int res = 0;
        while (q.size() > 1) {
            int u1 = q.top();
            q.pop();
            int u2 = q.top();
            q.pop();

            res += u1 + u2;
            q.push(u1 + u2);
        }

        cout << res << endl;
    }

    return 0;
}
